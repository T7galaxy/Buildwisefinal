#include "cusview.h"
#include "ui_cusview.h"

cusview::cusview(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::cusview)
{
    ui->setupUi(this);


    QString id="Hello";
    QString Task="Hello";
    QString Subcon="Hello";
    QString ddate="Hello";
    QString status ="Hello";

    ui->tableWidget->insertRow(ui->tableWidget->rowCount());
    ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,0, new QTableWidgetItem(id));
    ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,1, new QTableWidgetItem(Task));
    ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,2, new QTableWidgetItem(Subcon));
    ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,3, new QTableWidgetItem(ddate));
    ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,4, new QTableWidgetItem(status));

}

cusview::~cusview()
{
    delete ui;
}
