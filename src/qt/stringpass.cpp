#include "stringpass.h"

StringPass::StringPass() {}

void MyClass::setString(const QString &str) {
    myString = str;
}

QString MyClass::getString() const {
    return myString;
}
