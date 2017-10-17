#ifndef LOGINWIDGET_H
#define LOGINWIDGET_H

#include <QWidget>
#include "SignupWidget.h"

namespace Ui {
class LoginWidget;
}

class LoginWidget : public QWidget
{
    Q_OBJECT

public:
    explicit LoginWidget(QWidget *parent = 0);
    ~LoginWidget();

private slots:

    void on_signupButton_clicked();

private:
    Ui::LoginWidget *ui;
    SignupWidget *signupWidget;
};

#endif // LOGINWIDGET_H
