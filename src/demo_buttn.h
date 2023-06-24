#ifndef DEMO_BUTTN_H
#define DEMO_BUTTN_H

#include <QMainWindow>

namespace Ui {
class demo_buttn;
}

class demo_buttn : public QMainWindow
{
    Q_OBJECT

public:
    explicit demo_buttn(QWidget *parent = nullptr);
    ~demo_buttn();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::demo_buttn *ui;
};

#endif // DEMO_BUTTN_H
