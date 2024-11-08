#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "createuser.h"
#include "dashboard.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_createUserButton_clicked()
{
    CreateUser *createUserForm = new CreateUser(this);  // Create the User Creation Form
    createUserForm->setAttribute(Qt::WA_DeleteOnClose);  // Deletes the form on close
    createUserForm->setWindowModality(Qt::ApplicationModal);
    createUserForm->setWindowFlags(Qt::Dialog | Qt::WindowCloseButtonHint);  // Dialog behavior
    createUserForm->setWindowTitle("Create New User");  // Set a descriptive title
    // Connect the signal from CreateUser to the slot in MainWindow
    connect(createUserForm, &CreateUser::userCreated, this, &MainWindow::addUserToList);


    createUserForm->show();  // Show the form
}

void MainWindow::addUserToList(User* newUser)
{
    userList.append(newUser); // Add the new user to the user list

    // Optional: Show a confirmation message
    QMessageBox::information(this, "User Added", QString("User %1 has been added!").arg(newUser->getUsername()));
}
void MainWindow::on_loginButton_clicked()
{
    QString username = ui->usernameInput->text();
    QString password = ui->passwordInput->text();

    if (username == "admin" && password == "password") {
        this->hide();  // Hide the login window

        Dashboard *dashboard = new Dashboard();
        dashboard->setAttribute(Qt::WA_DeleteOnClose);  // Automatically delete on close
        dashboard->show();  // Show the dashboard window
    } else {
        QMessageBox::warning(this, "Login Failed", "Invalid username or password.");
    }
}


