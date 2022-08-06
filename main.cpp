#include <QApplication>
#include <QWidget>
#include <QMainWindow>
#include "mainpage.h"
#include "ui_Mainpage.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    QMainWindow w;
    Ui::Mainpage ui;
    ui.setupUi(& w);
    w.show();
    return a.exec();
}
