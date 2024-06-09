#include <QApplication>
#include <QMainWindow>
#include "include/paint.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QMainWindow window;
    Ui::paintWindow ui;
    ui.setupUi(&window);
    window.show();
    return app.exec();
}
