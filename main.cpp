#include "solarglwidget.h"
#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    SolarGLWidget widget;
    widget.resize(800, 600);
    widget.show();
    return app.exec();
}
