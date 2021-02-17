#include <QCoreApplication>
#include "bankaccount.h"
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // don't change type of account, use it as QObject*
    QObject *account = new BankAccount;

    // TODO: set holder name
    // TODO: print it to qDebug()

    // TODO: get balance from property to qDebug()

    return a.exec();
}
