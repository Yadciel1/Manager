//
// Created by slave on 06.08.2022.
//

#ifndef MANAGER_MAINPAGE_H
#define MANAGER_MAINPAGE_H

#include <QMainWindow>


QT_BEGIN_NAMESPACE
namespace Ui { class Mainpage; }
QT_END_NAMESPACE

class Mainpage : public QMainWindow {
Q_OBJECT

public:
    explicit Mainpage(QWidget *parent = nullptr);

    ~Mainpage() override;

private:
    Ui::Mainpage *ui;

private slots:
    void on_pushButton_clicked();
};


#endif //MANAGER_MAINPAGE_H
