#include "dashboard.h"
#include "ui_dashboard.h"
#include <QMessageBox>
#include "projects.h"

Dashboard::Dashboard(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Dashboard)
{
    ui->setupUi(this);
}

Dashboard::~Dashboard()
{
    delete ui;
}

void Dashboard::on_projectsButton_clicked()
{
    Projects *projectsScreen = new Projects();
    projectsScreen->show();
}

void Dashboard::on_tasksButton_clicked()
{
    QMessageBox::information(this, "Tasks", "Tasks button clicked!");
}

void Dashboard::on_notificationsButton_clicked()
{
    QMessageBox::information(this, "Notifications", "Notifications button clicked!");
}

void Dashboard::on_userManagementButton_clicked()
{
    QMessageBox::information(this, "User Management", "User Management button clicked!");
}
