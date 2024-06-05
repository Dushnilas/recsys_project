#include "stringpass.h"

StringPass::StringPass() {}

void StringPass::setString(const QString &str) {
    myString = str;
}

QString StringPass::getString() const {
    return myString;
}
