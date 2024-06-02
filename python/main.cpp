 #include <Python.h>
#include <iostream>
#include <unistd.h>
#include <string>
#include <vector>
#include <map>

bool initializePythonInterpreter(const std::string& project_path) {
    const std::string red_color_code = "\033[1;31m";
    const std::string reset_color_code = "\033[0m";

    if (chdir(project_path.c_str()) != 0) {
        std::cout << red_color_code << "Failed to change directory to " << project_path << reset_color_code << std::endl;
        return false;
    }

    Py_Initialize();

    PyRun_SimpleString("import sys");
    PyRun_SimpleString("import os");
    PyRun_SimpleString("print('Current working directory:', os.getcwd())");

    std::string python_path_cmd = "sys.path.append('" + project_path + "')";
    std::string venv_path_cmd = "sys.path.append('" + project_path + "/mysqlenv/lib/python3.12/site-packages')";
    PyRun_SimpleString(python_path_cmd.c_str());
    PyRun_SimpleString(venv_path_cmd.c_str());
    PyRun_SimpleString("print('sys.path:', sys.path)");

    return true;
}

std::vector<std::map<std::string, std::string>> ExecuteSelectQuery(const std::string& library, const std::string& function_name, const std::string& query) {
    const std::string red_color_code = "\033[1;31m";
    const std::string reset_color_code = "\033[0m";
    std::vector<std::map<std::string, std::string>> results;

    PyObject *pName = PyUnicode_DecodeFSDefault(library.c_str());
    PyObject *pModule = PyImport_Import(pName);
    Py_DECREF(pName);

    if (pModule != nullptr) {
        PyObject *pFunc = PyObject_GetAttrString(pModule, function_name.c_str());

        if (PyCallable_Check(pFunc)) {
            PyObject *pArgs = PyTuple_Pack(1, PyUnicode_FromString(query.c_str()));

            PyObject *pValue = PyObject_CallObject(pFunc, pArgs);
            Py_DECREF(pArgs);

            if (pValue != nullptr) {
                PyObject *iterator = PyObject_GetIter(pValue);
                if (iterator == nullptr) {
                    PyErr_Print();
                    std::cout << red_color_code << "Failed to get iterator" << reset_color_code << std::endl;
                    Py_DECREF(pValue);
                    Py_DECREF(pModule);
                    return results;
                }

                PyObject *item;
                while ((item = PyIter_Next(iterator)) != NULL) {
                    PyObject* row_iterator = PyObject_GetIter(item);
                    if (row_iterator == nullptr) {
                        PyErr_Print();
                        std::cout << red_color_code << "Failed to get row iterator" << reset_color_code << std::endl;
                        Py_DECREF(item);
                        Py_DECREF(iterator);
                        Py_DECREF(pValue);
                        Py_DECREF(pModule);
                        return results;
                    }

                    PyObject* column_item;
                    std::map<std::string, std::string> row;
                    while ((column_item = PyIter_Next(row_iterator)) != NULL) {
                        PyObject *key = PyTuple_GetItem(column_item, 0);
                        PyObject *value = PyTuple_GetItem(column_item, 1);
                        if (key == nullptr || value == nullptr) {
                            PyErr_Print();
                            std::cout << red_color_code << "Failed to get key or value from column_item" << reset_color_code << std::endl;
                            Py_DECREF(column_item);
                            Py_DECREF(row_iterator);
                            Py_DECREF(item);
                            Py_DECREF(iterator);
                            Py_DECREF(pValue);
                            Py_DECREF(pModule);
                            return results;
                        }
                        row[PyUnicode_AsUTF8(key)] = PyUnicode_AsUTF8(value);
                        Py_DECREF(column_item);
                    }
                    Py_DECREF(row_iterator);
                    results.push_back(row);
                    Py_DECREF(item);
                }
                Py_DECREF(iterator);
                Py_DECREF(pValue);
            } else {
                PyErr_Print();
                std::cout << red_color_code << "Call to " << function_name << " failed" << reset_color_code << std::endl;
            }
        } else {
            PyErr_Print();
            std::cout << red_color_code << "Cannot find function '" << function_name << "'" << reset_color_code << std::endl;
        }
        Py_XDECREF(pFunc);
        Py_DECREF(pModule);
    } else {
        PyErr_Print();
        std::cout << red_color_code << "Failed to load '" << library << "'" << reset_color_code << std::endl;
    }
    return results;
}

bool ExecuteInsertQuery(const std::string& library, const std::string& function_name, const std::string& table_name, const std::vector<std::map<std::string, std::string>>& data) {
    const std::string red_color_code = "\033[1;31m";
    const std::string reset_color_code = "\033[0m";
    bool success = false;

    PyObject *pName = PyUnicode_DecodeFSDefault(library.c_str());
    PyObject *pModule = PyImport_Import(pName);
    Py_DECREF(pName);

    if (pModule != nullptr) {
        PyObject *pFunc = PyObject_GetAttrString(pModule, function_name.c_str());

        if (PyCallable_Check(pFunc)) {
            PyObject *pDataList = PyList_New(data.size());
            for (size_t i = 0; i < data.size(); ++i) {
                PyObject *pRowList = PyList_New(data[i].size());
                size_t j = 0;
                for (const auto& pair : data[i]) {
                    PyObject *pTuple = PyTuple_Pack(2, PyUnicode_FromString(pair.first.c_str()), PyUnicode_FromString(pair.second.c_str()));
                    PyList_SetItem(pRowList, j, pTuple);
                    ++j;
                }
                PyList_SetItem(pDataList, i, pRowList);
            }

            PyObject *pArgs = PyTuple_Pack(2, PyUnicode_FromString(table_name.c_str()), pDataList);

            PyObject *pValue = PyObject_CallObject(pFunc, pArgs);
            Py_DECREF(pArgs);
            Py_DECREF(pDataList);

            if (pValue != nullptr) {
                success = true;
                Py_DECREF(pValue);
            } else {
                PyErr_Print();
                std::cout << red_color_code << "Call to " << function_name << " failed" << reset_color_code << std::endl;
            }
        } else {
            PyErr_Print();
            std::cout << red_color_code << "Cannot find function '" << function_name << "'" << reset_color_code << std::endl;
        }
        Py_XDECREF(pFunc);
        Py_DECREF(pModule);
    } else {
        PyErr_Print();
        std::cout << red_color_code << "Failed to load '" << library << "'" << reset_color_code << std::endl;
    }

    return success;
}

int main() {
    std::string project_path = "/Users/maykorablina/Yandex.Disk.localized/CodingProjects/recsys_cpp/python";
    if (!initializePythonInterpreter(project_path)) {
        return 1;
    }

    std::vector<std::map<std::string, std::string>> data = {
        {{"user_id", "redcar"}, {"name", "Lisa Storozheva"}, {"age", "100"}, {"photo_uri", ""}},
        {{"user_id", "soderzhanka_of_tima"}, {"name", "Nastya"}, {"age", "18"}, {"photo_uri", ""}}
    };
    bool insert_success = ExecuteInsertQuery("library", "insert", "user_profile", data);

    const std::string yellow_color_code = "\033[1;33m";
    const std::string reset_color_code = "\033[0m";

    if (insert_success) {
        std::cout << yellow_color_code << "Data inserted successfully." << reset_color_code << std::endl;
    } else {
        std::cout << yellow_color_code << "Data insertion failed." << reset_color_code << std::endl;
    }

    std::string query = "SELECT * FROM user_profile";
    std::vector<std::map<std::string, std::string>> results = ExecuteSelectQuery("library", "select", query);

    for (const auto& row : results) {
        for (const auto& [key, value] : row) {
            std::cout << yellow_color_code << key << ": " << value << "\t" << reset_color_code;
        }
        std::cout << '\n';
    }




    Py_Finalize();
    return 0;
}
