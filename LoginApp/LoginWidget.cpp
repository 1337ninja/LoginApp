#include "LoginWidget.h"
#include "ui_LoginWidget.h"

LoginWidget::LoginWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LoginWidget)
{
    ui->setupUi(this);
    signupWidget = new SignupWidget();
}

LoginWidget::~LoginWidget()
{
    delete ui;
    delete signupWidget;
}

void LoginWidget::on_signupButton_clicked()
{
    this->hide();
    signupWidget->show();
}
