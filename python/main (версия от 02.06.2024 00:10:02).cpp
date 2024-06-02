#include <Python.h>
#include <iostream>
#include <unistd.h> // Для функции chdir
#include <string>

void callPythonFunction(const std::string& query) {
    std::string project_path = "/Users/maykorablina/Yandex.Disk.localized/CodingProjects/recsys_cpp/python";
    if (chdir(project_path.c_str()) != 0) {
        std::cerr << "Failed to change directory to " << project_path << std::endl;
        return;
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

    // Загрузка модуля library
    PyObject *pName = PyUnicode_DecodeFSDefault("library");
    PyObject *pModule = PyImport_Import(pName);
    Py_DECREF(pName);

    if (pModule != nullptr) {
        PyObject *pFunc = PyObject_GetAttrString(pModule, "execute_select_query");

        if (PyCallable_Check(pFunc)) {
            PyObject *pArgs = PyTuple_Pack(1, PyUnicode_FromString(query.c_str()));

            PyObject *pValue = PyObject_CallObject(pFunc, pArgs);
            Py_DECREF(pArgs);

            if (pValue != nullptr) {
                // Обработка результата
                PyObject *iterator = PyObject_GetIter(pValue);
                PyObject *item;
                while ((item = PyIter_Next(iterator)) != NULL) {
                    PyObject* repr = PyObject_Repr(item);
                    std::cout << PyUnicode_AsUTF8(repr) << std::endl;
                    Py_DECREF(repr);
                    Py_DECREF(item);
                }
                Py_DECREF(iterator);
                Py_DECREF(pValue);
            } else {
                PyErr_Print();
                std::cerr << "Call to execute_select_query failed" << std::endl;
            }
        } else {
            PyErr_Print();
            std::cerr << "Cannot find function 'execute_select_query'" << std::endl;
        }
        Py_XDECREF(pFunc);
        Py_DECREF(pModule);
    } else {
        PyErr_Print();
        std::cerr << "Failed to load 'library'" << std::endl;
    }

    Py_Finalize();
}

int main() {
    std::string query = "SELECT * FROM titles LIMIT 5";
    callPythonFunction(query);
    return 0;
}
