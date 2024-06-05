#ifndef STRINGPASS_H
#define STRINGPASS_H


#include <QString>

class StringPass
{
public:
    StringPass();

    void setString(const QString &str);
    QString getString() const;

private:
    QString myString;
};

#endif // STRINGPASS_H
