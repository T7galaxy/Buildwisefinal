#include "newproject.h"
#include "ui_newproject.h"

Newproject::Newproject(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Newproject)
{
    ui->setupUi(this);
}

Newproject::~Newproject()
{
    delete ui;
}

void Newproject::on_pushButton_clicked()
{
    QString id=ui->lineEdit_2->text();
    QString Task=ui->lineEdit_3->text();
    QString Subcon=ui->lineEdit_4->text();
    QString ddate=ui->lineEdit_6->text();
    QString status =ui->lineEdit_5->text();

    ui->tableWidget->insertRow(ui->tableWidget->rowCount());
    ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,0, new QTableWidgetItem(id));
    ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,1, new QTableWidgetItem(Task));
    ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,2, new QTableWidgetItem(Subcon));
    ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,3, new QTableWidgetItem(ddate));
    ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,4, new QTableWidgetItem(status));

    //send data to database
}

