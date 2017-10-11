#include "LoginWidget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LoginWidget loginWidget;
    loginWidget.show();

    return a.exec();
}
