#include <Python.h>
#include <iostream>
#include <unistd.h>
#include <string>
#include <vector>

std::vector<std::vector<std::string>> ExecuteSelectQuery(const std::string& query) {
    std::vector<std::vector<std::string>> results;

    std::string project_path = "/Users/maykorablina/Yandex.Disk.localized/CodingProjects/recsys_cpp/python";
    if (chdir(project_path.c_str()) != 0) {
        std::cerr << "Failed to change directory to " << project_path << std::endl;
        return results;
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

    PyObject *pName = PyUnicode_DecodeFSDefault("library");
    PyObject *pModule = PyImport_Import(pName);
    Py_DECREF(pName);

    if (pModule != nullptr) {
        PyObject *pFunc = PyObject_GetAttrString(pModule, "select");

        if (PyCallable_Check(pFunc)) {
            PyObject *pArgs = PyTuple_Pack(1, PyUnicode_FromString(query.c_str()));

            PyObject *pValue = PyObject_CallObject(pFunc, pArgs);
            Py_DECREF(pArgs);

            if (pValue != nullptr) {
                PyObject *iterator = PyObject_GetIter(pValue);
                PyObject *item;
                while ((item = PyIter_Next(iterator)) != NULL) {
                    PyObject* row_iterator = PyObject_GetIter(item);
                    PyObject* column_item;
                    std::vector<std::string> row;
                    while ((column_item = PyIter_Next(row_iterator)) != NULL) {
                        PyObject* repr = PyObject_Str(column_item);
                        row.push_back(PyUnicode_AsUTF8(repr));
                        Py_DECREF(repr);
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
                std::cerr << "Call to select failed" << std::endl;
            }
        } else {
            PyErr_Print();
            std::cerr << "Cannot find function 'select'" << std::endl;
        }
        Py_XDECREF(pFunc);
        Py_DECREF(pModule);
    } else {
        PyErr_Print();
        std::cerr << "Failed to load 'library'" << std::endl;
    }

    Py_Finalize();

    return results;
}

int main() {
    std::string query = "SELECT * FROM user_profile";
    std::vector<std::vector<std::string>> results = ExecuteSelectQuery(query);

    for (const auto& row : results) {
        for (const auto& col : row) {
            std::cout << col << "\t";
        }
        std::cout << std::endl;
    }

    return 0;
}
