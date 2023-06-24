#include "form_demo.h"
#include "ui_form_demo.h"
#include <QDebug>

Form_demo::Form_demo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form_demo)
{
    ui->setupUi(this);
}

Form_demo::~Form_demo()
{
    delete ui;
}

void Form_demo::on_pushButton_clicked()
{
    qDebug()<<"hello world";
}

