#include "human.h"

Human::Human(QObject *parent) : QObject(parent)
{

}

QString Human::name()
{
    return this->m_name;
}

void Human::setName(QString str)
{
    this->m_name = str;
}

int Human::age()
{
    return this->m_age;
}

void Human::setAge(int num)
{
    this->m_age = num;
}

char Human::sexSymbol()
{
    return this->m_sexSymbol;
}

void Human::setSexSymbol(char c)
{
    this->m_sexSymbol = c;
}
