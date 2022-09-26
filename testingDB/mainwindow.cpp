#include "mainwindow.h"
#include "ui_mainwindow.h"




MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

}

MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_pushButton_clicked()
{
    uidapon= new uidaftarpotensi;
    uidapon->show();
}


void MainWindow::on_pushButton_2_clicked()
{
    uidapro= new uidataprofil;
    uidapro->show();
}


void MainWindow::on_pushButton_3_clicked()
{
    uidatem= new uidatatempat;
    uidatem->show();
}

