#include "controller.h"

controller::controller(QObject *parent) : QObject(parent), m_myModel(new ShipWar())
{

}

controller::~controller()
{
    delete m_myModel;
}
