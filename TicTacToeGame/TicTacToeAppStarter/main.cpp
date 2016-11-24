#include "../tictactoe/gamecontroller.h"
#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>

int main(int argc, char* argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    GameController*       gameController = new GameController();

    gameController->init();

    engine.rootContext()->setContextProperty("gameController", gameController);
    engine.load(QUrl(QStringLiteral("qrc:/qml/main.qml")));

    return app.exec();
}
