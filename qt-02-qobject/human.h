#ifndef HUMAN_H
#define HUMAN_H

#include <QObject>
#include <QString>

class Human : public QObject
{
    Q_OBJECT

    QString m_name = "";
    int m_age = 0;
    char m_sexSymbol = 'N';
public:


    explicit Human(QObject *parent = nullptr);
    QString name();
    void setName(QString str);

    int age();
    void setAge(int num);

    char sexSymbol();
    void setSexSymbol(char c);

signals:

};

#endif // HUMAN_H
