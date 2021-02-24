#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <QObject>

class BankAccount : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QString holderName READ holderName WRITE setHolderName)
    Q_PROPERTY(qint64 balance MEMBER m_balance READ balance CONSTANT)

public:
    explicit BankAccount(QObject *parent = 0);

    QString holderName() const {
        return m_holderName;
    }

    void setHolderName(QString str){
        m_holderName = str;
    }

    void deposit(long amount);
    void withdraw(long amount);

    qint64 balance() const
    {
        return m_balance;
    }

private:
    QString m_holderName;
    long m_balance;
};

#endif // BANKACCOUNT_H
