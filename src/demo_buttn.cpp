#include "demo_buttn.h"
#include "ui_demo_buttn.h"
#include <QDebug>

demo_buttn::demo_buttn(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::demo_buttn)
{
    ui->setupUi(this);
}

demo_buttn::~demo_buttn()
{
    delete ui;
}

void demo_buttn::on_pushButton_clicked()
{
    qDebug() << "hello";
}


void demo_buttn::on_pushButton_2_clicked()
{
    qDebug() << "worssssld2";
}   


void demo_buttn::on_pushButton_3_clicked()
{
    qDebug() << "worssssld3";
}

