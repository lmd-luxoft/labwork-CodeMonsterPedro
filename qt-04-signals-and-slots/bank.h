#ifndef BANK_H
#define BANK_H

#include <QObject>

class Bank : public QObject
{
    Q_OBJECT

public:
    explicit Bank(QObject *parent = 0);

    long totalBalance() const;
signals:
    void totalBalanceChanged(long newTotalBalance);
public slots:
    void updateTotalBalance();
    // TODO: declare slot to listen account changes
};

#endif // BANK_H
