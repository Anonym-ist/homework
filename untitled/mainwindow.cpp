#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "student.h"
#include <string.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->btn_emplace,&QPushButton::clicked,ui->btn_emplace,[=](){ss.emplace(ui->lne_id->text().toInt(),ui->lne_name->text().toStdString());});

    connect(ui->btn_erase,&QPushButton::clicked,ui->btn_erase,[=](){ss.erase(ui->lne_id->text().toInt());});

    connect(ui->btn_query,&QPushButton::clicked,ui->btn_query,[=](){returnName =  QString( ss.query( ui->lne_id->text().toInt() ).c_str() );});

    connect(ui->btn_query,&QPushButton::clicked,ui->btn_query,[=](){ui->returnName->setText(returnName);});

    connect(ui->close,&QPushButton::clicked,this,&QWidget::close);
}

MainWindow::~MainWindow()
{
    delete ui;
}

