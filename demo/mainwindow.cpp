#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    qDebug() << "Submitting data...";
    qDebug() << "Firstname: " << ui->firstname_line_edit->text();
    qDebug() << "Lastname: " << ui->lastname_line_edit->text();
    qDebug() << "Message: " << ui->message_text_edit->toPlainText();
}

