#ifndef PAINT_H
#define PAINT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_paintWindow
{
public:
    QWidget *centralwidget;
    QFrame *sheet;
    QGroupBox *shapes_group;
    QPushButton *Rectangle;
    QPushButton *Circle;
    QPushButton *Triangle;
    QPushButton *Line;
    QLabel *Shapes;
    QGroupBox *Tools_group;
    QLabel *Tools;
    QPushButton *ClearAll;
    QPushButton *Eraser;
    QPushButton *Brush;
    QGroupBox *color_group;
    QLabel *Colors;
    QPushButton *Orange;
    QPushButton *Blue;
    QPushButton *Brown;
    QPushButton *Black;
    QPushButton *Green;
    QPushButton *Yellow;
    QPushButton *Pink;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *paintWindow);
    void retranslateUi(QMainWindow *paintWindow);
};

namespace Ui {
    class paintWindow: public Ui_paintWindow {};
} 

QT_END_NAMESPACE

#endif // PAINT_H
