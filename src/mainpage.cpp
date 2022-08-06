//
// Created by slave on 06.08.2022.
//

// You may need to build the project (run Qt uic code generator) to get "ui_Mainpage.h" resolved

#include "mainpage.h"
#include "ui_Mainpage.h"


Mainpage::Mainpage(QWidget *parent) :
        QMainWindow(parent), ui(new Ui::Mainpage) {
    ui->setupUi(this);
    //create a connect
    connect(ui->BMitarbeiter, &QPushButton::clicked, this, &Mainpage::on_pushButton_clicked);
}

Mainpage::~Mainpage() {
    delete ui;
}

void Mainpage::on_pushButton_clicked(){
    ui->BMitarbeiter->setText("PUSH");
}
