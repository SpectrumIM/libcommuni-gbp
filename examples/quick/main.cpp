/*
 * Copyright (C) 2008-2015 The Communi Project
 *
 * This example is free, and not covered by the BSD license. There is no
 * restriction applied to their modification, redistribution, using and so on.
 * You can study them, modify them, use them in your own program - either
 * completely or partially.
 */

#include <QGuiApplication>
#include <QQmlApplicationEngine>

int main(int argc, char* argv[])
{
    QGuiApplication app(argc, argv);
    app.setOrganizationName("Commmuni");
    app.setApplicationName("QtQuick Example");
    QQmlApplicationEngine engine(QUrl("qrc:/main.qml"));
    return app.exec();
}
