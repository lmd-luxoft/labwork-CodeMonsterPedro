#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <QObject>

class BankAccount : public QObject
{
    Q_OBJECT
    // TODO: declare QString holderName property that's represents account holder name
    //       this property must have getter and setter


    // TODO: declare long balance property
    //       this property should be read-only and associated with variable m_balance
public:
    explicit BankAccount(QObject *parent = 0);

    void deposit(long amount);
    void withdraw(long amount);

    // TODO: declare and implement holderName getter/setter
    // TODO: decalre and implement balance getter
private:
    // TODO: declare holderName
    long m_balance;
};

#endif // BANKACCOUNT_H
