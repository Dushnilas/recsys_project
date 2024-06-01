#include <Python.h>
#include <iostream>

void callPythonFunction() {
    Py_Initialize();
    PyRun_SimpleString("import sys");
    PyRun_SimpleString("import os");
    PyRun_SimpleString("print('Current working directory:', os.getcwd())");

    std::string project_path = "/Users/maykorablina/Yandex.Disk.localized/CodingProjects/recsys_cpp";
    std::string python_path_cmd = "sys.path.append('" + project_path + "/python')";
    PyRun_SimpleString(python_path_cmd.c_str());
    PyRun_SimpleString("print('sys.path:', sys.path)");

    PyObject *pName = PyUnicode_DecodeFSDefault("example");
    PyObject *pModule = PyImport_Import(pName);
    Py_DECREF(pName);

    if (pModule != nullptr) {
        PyObject *pFunc = PyObject_GetAttrString(pModule, "add");

        if (PyCallable_Check(pFunc)) {
            PyObject *pArgs = PyTuple_Pack(2, PyLong_FromLong(2), PyLong_FromLong(3));

            PyObject *pValue = PyObject_CallObject(pFunc, pArgs);
            Py_DECREF(pArgs);

            if (pValue != nullptr) {
                std::cout << "Result of add: " << PyLong_AsLong(pValue) << std::endl;
                Py_DECREF(pValue);
            } else {
                PyErr_Print();
                std::cerr << "Call to add failed" << std::endl;
            }
        } else {
            PyErr_Print();
            std::cerr << "Cannot find function 'add'" << std::endl;
        }
        Py_XDECREF(pFunc);
        Py_DECREF(pModule);
    } else {
        PyErr_Print();
        std::cerr << "Failed to load 'example'" << std::endl;
    }

    Py_Finalize();
}

int main() {
    callPythonFunction();
    return 0;
}
