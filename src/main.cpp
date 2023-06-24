#include "demo_buttn.h"
#include <QMainWindow>
#include <QApplication>
#pragma comment(lib, "user32.lib")

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    demo_buttn d;
    d.show();
    return a.exec();
}
