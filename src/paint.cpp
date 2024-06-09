#include "/home/mobina/Documents/OpenGl/Paint/include/paint.h"
#include <QtWidgets/QMainWindow>

void Ui_paintWindow::retranslateUi(QMainWindow *paintWindow){

    paintWindow->setWindowTitle(QCoreApplication::translate("paintWindow", "MainWindow", nullptr));
    shapes_group->setTitle(QString());
    Rectangle->setText(QCoreApplication::translate("paintWindow", "Rectangle", nullptr));
    Circle->setText(QCoreApplication::translate("paintWindow", "Circle", nullptr));
    Triangle->setText(QCoreApplication::translate("paintWindow", "Triangle", nullptr));
    Line->setText(QCoreApplication::translate("paintWindow", "Line", nullptr));
    Shapes->setText(QCoreApplication::translate("paintWindow", "Shapes", nullptr));
    Tools_group->setTitle(QString());
    Tools->setText(QCoreApplication::translate("paintWindow", "Tools", nullptr));
    ClearAll->setText(QCoreApplication::translate("paintWindow", "Clear all", nullptr)); 
    Eraser->setText(QCoreApplication::translate("paintWindow", "Eraser", nullptr));
    Brush->setText(QCoreApplication::translate("paintWindow", "Brush", nullptr));
    color_group->setTitle(QString());
    Colors->setText(QCoreApplication::translate("paintWindow", "Colors", nullptr));
    Orange->setText(QString());
    Blue->setText(QString());
    Brown->setText(QString());
    Black->setText(QString());
    Green->setText(QString());
    Yellow->setText(QString());
    Pink->setText(QString());
}



void Ui_paintWindow::setupUi(QMainWindow *paintWindow){
    if (paintWindow->objectName().isEmpty())
        paintWindow->setObjectName(QString::fromUtf8("paintWindow"));
    paintWindow->resize(934, 567);
    paintWindow->setStyleSheet(QString::fromUtf8("background-color:#84a59d;"));
    centralwidget = new QWidget(paintWindow);
    centralwidget->setObjectName(QString::fromUtf8("centralwidget"));

    sheet = new QFrame(centralwidget);
    sheet->setObjectName(QString::fromUtf8("sheet"));
    sheet->setGeometry(QRect(20, 90, 891, 461));
    sheet->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
    sheet->setFrameShape(QFrame::StyledPanel);
    sheet->setFrameShadow(QFrame::Raised);

    shapes_group = new QGroupBox(centralwidget);
    shapes_group->setObjectName(QString::fromUtf8("shapes_group"));
    shapes_group->setGeometry(QRect(20, 10, 371, 61));
    shapes_group->setStyleSheet(QString::fromUtf8("color:#fff;\nborder:2px solid #FFF5E0;"));
    Rectangle = new QPushButton(shapes_group);
    Rectangle->setObjectName(QString::fromUtf8("Rectangle"));
    Rectangle->setGeometry(QRect(10, 20, 81, 31));
    Rectangle->setStyleSheet(QString::fromUtf8("background:#f28482;\ncolor:#fff;\nborder:2px solid #FFF5E0;"));
    Circle = new QPushButton(shapes_group);
    Circle->setObjectName(QString::fromUtf8("Circle"));
    Circle->setGeometry(QRect(100, 20, 81, 31));
    Circle->setStyleSheet(QString::fromUtf8("background:#f28482;\ncolor:#fff;\nborder:2px solid #FFF5E0;"));
    Triangle = new QPushButton(shapes_group);
    Triangle->setObjectName(QString::fromUtf8("Triangle"));
    Triangle->setGeometry(QRect(190, 20, 81, 31));
    Triangle->setStyleSheet(QString::fromUtf8("background:#f28482;\ncolor:#fff;\nborder:2px solid #FFF5E0;"));
    Line = new QPushButton(shapes_group);
    Line->setObjectName(QString::fromUtf8("Line"));
    Line->setGeometry(QRect(280, 20, 81, 31));
    Line->setStyleSheet(QString::fromUtf8("background:#f28482;\ncolor:#fff;\nborder:2px solid #FFF5E0;"));
    Shapes = new QLabel(shapes_group);
    Shapes->setObjectName(QString::fromUtf8("Shapes"));
    Shapes->setGeometry(QRect(10, 0, 67, 17));
    Shapes->setStyleSheet(QString::fromUtf8("border:none;"));

    Tools_group = new QGroupBox(centralwidget);
    Tools_group->setObjectName(QString::fromUtf8("Tools_group"));
    Tools_group->setGeometry(QRect(400, 10, 281, 61));
    Tools_group->setStyleSheet(QString::fromUtf8("color:#fff;\nborder:2px solid #FFF5E0;"));
    Tools = new QLabel(Tools_group);
    Tools->setObjectName(QString::fromUtf8("Tools"));
    Tools->setGeometry(QRect(10, 0, 67, 17));
    Tools->setStyleSheet(QString::fromUtf8("border:none;\n"));
    ClearAll = new QPushButton(Tools_group);  
    ClearAll->setObjectName(QString::fromUtf8("ClearAll"));
    ClearAll->setGeometry(QRect(100, 20, 81, 31));
    ClearAll->setStyleSheet(QString::fromUtf8("background:#f6bd60;\ncolor:#fff;\nborder:2px solid #FFF5E0;"));
    Eraser = new QPushButton(Tools_group);
    Eraser->setObjectName(QString::fromUtf8("Eraser"));
    Eraser->setGeometry(QRect(10, 20, 81, 31));
    Eraser->setStyleSheet(QString::fromUtf8("background:#f6bd60;\ncolor:#fff;\nborder:2px solid #FFF5E0;"));
    Brush = new QPushButton(Tools_group);
    Brush->setObjectName(QString::fromUtf8("Brush"));
    Brush->setGeometry(QRect(190, 20, 81, 31));
    Brush->setStyleSheet(QString::fromUtf8("background:#f6bd60;\ncolor:#fff;\nborder:2px solid #FFF5E0;"));

    color_group = new QGroupBox(centralwidget);
    color_group->setObjectName(QString::fromUtf8("color_group"));
    color_group->setGeometry(QRect(690, 10, 221, 61));
    color_group->setStyleSheet(QString::fromUtf8("color:#fff;\nborder:2px solid #FFF5E0;"));
    Colors = new QLabel(color_group);
    Colors->setObjectName(QString::fromUtf8("Colors"));
    Colors->setGeometry(QRect(10, 0, 67, 17));
    Colors->setStyleSheet(QString::fromUtf8("border:none;"));
    Orange = new QPushButton(color_group);
    Orange->setObjectName(QString::fromUtf8("Orange"));
    Orange->setGeometry(QRect(40, 30, 21, 21));
    Orange->setStyleSheet(QString::fromUtf8("background-color:#f95738;"));
    Blue = new QPushButton(color_group);
    Blue->setObjectName(QString::fromUtf8("Blue"));
    Blue->setGeometry(QRect(10, 30, 21, 21));
    Blue->setStyleSheet(QString::fromUtf8("background-color:#00b4d8;"));
    Brown = new QPushButton(color_group);
    Brown->setObjectName(QString::fromUtf8("Brown"));
    Brown->setGeometry(QRect(190, 30, 21, 21));
    Brown->setStyleSheet(QString::fromUtf8("background-color:#9c6644;"));
    Black = new QPushButton(color_group);
    Black->setObjectName(QString::fromUtf8("Black"));
    Black->setGeometry(QRect(130, 30, 21, 21));
    Black->setStyleSheet(QString::fromUtf8("background-color:#212529;"));
    Green = new QPushButton(color_group);
    Green->setObjectName(QString::fromUtf8("Green"));
    Green->setGeometry(QRect(100, 30, 21, 21));
    Green->setStyleSheet(QString::fromUtf8("background-color:#a7c957;"));
    Yellow = new QPushButton(color_group);
    Yellow->setObjectName(QString::fromUtf8("Yellow"));
    Yellow->setGeometry(QRect(70, 30, 21, 21));
    Yellow->setStyleSheet(QString::fromUtf8("background-color:#ffb703;"));
    Pink = new QPushButton(color_group);
    Pink->setObjectName(QString::fromUtf8("Pink"));
    Pink->setGeometry(QRect(160, 30, 21, 21));
    Pink->setStyleSheet(QString::fromUtf8("background-color:#e5989b;"));

    paintWindow->setCentralWidget(centralwidget);
    statusbar = new QStatusBar(paintWindow);
    statusbar->setObjectName(QString::fromUtf8("statusbar"));
    paintWindow->setStatusBar(statusbar);

    retranslateUi(paintWindow);

    QMetaObject::connectSlotsByName(paintWindow);
}