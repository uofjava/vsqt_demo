#ifndef FORM_DEMO_H
#define FORM_DEMO_H

#include <QWidget>

namespace Ui {
class Form_demo;
}

class Form_demo : public QWidget
{
    Q_OBJECT

public:
    explicit Form_demo(QWidget *parent = nullptr);
    ~Form_demo();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Form_demo *ui;
};

#endif // FORM_DEMO_H
