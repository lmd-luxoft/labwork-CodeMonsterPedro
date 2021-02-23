#include "shipwar.h"

ShipWar::ShipWar(QObject *parent) : QAbstractListModel(parent)
{
    qDebug()<<"constructor";
    this->generateMap();
}

void ShipWar::generateMap()
{
    qDebug()<<"generator";
    QList<int> x;
    x.append(0);x.append(1);x.append(0);x.append(1);x.append(0);x.append(0);x.append(0);x.append(0);x.append(0);x.append(0);
    x.append(0);x.append(1);x.append(0);x.append(0);x.append(0);x.append(0);x.append(1);x.append(1);x.append(0);x.append(0);
    x.append(0);x.append(1);x.append(0);x.append(0);x.append(0);x.append(0);x.append(0);x.append(0);x.append(1);x.append(0);
    x.append(0);x.append(1);x.append(0);x.append(0);x.append(0);x.append(0);x.append(0);x.append(0);x.append(1);x.append(0);
    x.append(0);x.append(0);x.append(0);x.append(1);x.append(1);x.append(1);x.append(0);x.append(0);x.append(0);x.append(0);
    x.append(0);x.append(0);x.append(0);x.append(0);x.append(0);x.append(0);x.append(0);x.append(1);x.append(0);x.append(0);
    x.append(0);x.append(0);x.append(0);x.append(1);x.append(1);x.append(1);x.append(0);x.append(1);x.append(0);x.append(0);
    x.append(0);x.append(0);x.append(0);x.append(0);x.append(0);x.append(0);x.append(0);x.append(0);x.append(0);x.append(0);
    x.append(0); x.append(1);x.append(0);x.append(0);x.append(0);x.append(0);x.append(1);x.append(0);x.append(0);x.append(1);
    x.append(0);x.append(0);x.append(0);x.append(0);x.append(0);x.append(0);x.append(0);x.append(0);x.append(0);x.append(0);
    this->m_map = x;
}

QHash<int, QByteArray> ShipWar::roleNames() const
{
    QHash<int, QByteArray> roles = QAbstractListModel::roleNames();
    roles[IconRole] = "mIcon";
    roles[TextRole] = "mText";

    return roles;
}

int ShipWar::rowCount(const QModelIndex &parent) const
{
    return m_map.size();
}

QVariant ShipWar::data(const QModelIndex &index, int role) const
{
    switch (role) {
    case TextRole:
        return m_map.at(index.row());
        break;
    case IconRole:

        break;
    default:
        break;
    }

    return QVariant();
}

QModelIndex ShipWar::index(int row, int column, const QModelIndex &parent) const
{
    return createIndex(row, column);
}

int ShipWar::columnCount(const QModelIndex &parent) const
{
    return 1;
}
