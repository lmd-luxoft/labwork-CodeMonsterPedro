#include "bankaccount.h"

BankAccount::BankAccount(Bank *parentBank) : QObject(parentBank)
{
    m_balance = 0;
    connect(this, SIGNAL(balanceChanged(long)),parentBank, SLOT(updateTotalBalance()));
    // TODO: connect Bank slots to BankAccount signals
}

long BankAccount::balance() const
{
    return m_balance;
}

void BankAccount::setBalance(long newBalance)
{
    m_balance = newBalance;
    emit balanceChanged(newBalance);
    // TODO: add here signal emition
}

void BankAccount::deposit(long amount)
{
    this->setBalance(this->balance() + amount);
}

void BankAccount::withdraw(long amount)
{
    this->setBalance(this->balance() - amount);
}
