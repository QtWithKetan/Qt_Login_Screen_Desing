#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setWindowFlag(Qt::FramelessWindowHint);
    setAttribute(Qt::WA_TranslucentBackground, true);
    QPixmap Temp;

    Temp = grab(QRect(0,0,width(),height()));

    Temp.save("Qt Login Screen.jpg");

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_label_linkHovered(const QString &link)
{

}

