#include "startview.h"

startView::startView()
{
    qDebug("startViewKonstruktor");
}

startView::~startView()
{

}

startView::startView(const startView&)
{

}

void startView::show()
{
    qDebug("show mal bitte");
    myEngine.load(QUrl(QStringLiteral("qrc:/main.qml")));
}