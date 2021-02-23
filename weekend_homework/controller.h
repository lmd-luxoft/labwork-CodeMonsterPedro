#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <QObject>
#include <shipwar.h>

class controller : public QObject
{
    Q_OBJECT

    ShipWar* m_myModel;

public:
    explicit controller(QObject *parent = nullptr);
    ~controller();

    Q_PROPERTY(ShipWar* myModel READ myModel WRITE setMyModel NOTIFY myModelChanged)

    ShipWar* myModel() const
    {
        return m_myModel;
    }

public slots:
    void setMyModel(ShipWar* myModel)
    {
        if (m_myModel == myModel)
            return;

        m_myModel = myModel;
        emit myModelChanged(m_myModel);
    }

signals:

    void myModelChanged(ShipWar* myModel);
};

#endif // CONTROLLER_H
