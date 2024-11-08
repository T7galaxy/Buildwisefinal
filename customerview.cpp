#include "customerview.h"
#include "ui_customerview.h"

customerview::customerview(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::customerview)
{
    ui->setupUi(this);

    ui->tableWidget->insertRow(ui->tableWidget->rowCount());
    ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, 0, new QTableWidgetItem(id));
    ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, 1, new QTableWidgetItem(Task));
    ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, 2, new QTableWidgetItem(Subcon));
    ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, 3, new QTableWidgetItem(ddate));
    ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, 4, new QTableWidgetItem(status));
}

customerview::~customerview()
{
    delete ui;
}
