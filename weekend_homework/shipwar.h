#ifndef SHIPWAR_H
#define SHIPWAR_H

#include <QObject>
#include <QDebug>
#include <QAbstractListModel>

class ShipWar : public QAbstractListModel
{
    Q_OBJECT

public:
    enum Roles {
        TextRole = Qt::UserRole + 1,
        IconRole
    };

    explicit ShipWar(QObject *parent = nullptr);

    Q_INVOKABLE virtual int rowCount(const QModelIndex &parent = QModelIndex()) const;
    virtual QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const;
    virtual QModelIndex index(int row, int column, const QModelIndex &parent) const;
    virtual int columnCount(const QModelIndex &parent) const;

    QHash<int, QByteArray> roleNames() const;

private:

    QList<int> m_map;

    void generateMap();

public slots:

signals:

};

#endif // SHIPWAR_H
