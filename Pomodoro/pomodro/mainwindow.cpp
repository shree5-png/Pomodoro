#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // Disable the maximize button
    setWindowFlags(windowFlags() & ~Qt::WindowMaximizeButtonHint);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
//    MainTimer mt;
//    mt.setModal(true);
//    mt.exec();
    hide();
    mt = new MainTimer(this);
    mt->show();

}

