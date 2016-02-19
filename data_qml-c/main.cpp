#include <QApplication>
#include <qqml.h>
#include <QQmlApplicationEngine>

#include "testData.h"
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QQmlApplicationEngine engine;

    qmlRegisterType<CtestData>("TestData",1,0,"DataControl");

    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
