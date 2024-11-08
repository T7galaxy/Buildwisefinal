#include "createuser.h"
#include "ui_createuser.h"
#include "user.h"
#include <QMessageBox>

CreateUser::CreateUser(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CreateUser)
{
    ui->setupUi(this);

    // Connect OK and Cancel buttons to their respective slots
    connect(ui->okButton, &QPushButton::clicked, this, &CreateUser::on_okButton_clicked);
    connect(ui->cancelButton, &QPushButton::clicked, this, &CreateUser::close);
}

CreateUser::~CreateUser()
{
    delete ui;
}

void CreateUser::on_okButton_clicked()
{
    QString username = ui->usernameInput->text();
    if (username.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Username cannot be empty.");
        return;
    }

    User::Role role = ui->projectManagerRadioButton->isChecked() ? User::ProjectManager : User::Subcontractor;

    User *newUser = new User(username, role);
    emit userCreated(newUser);  // Emit signal

    QMessageBox::information(this, "User Created", "User created successfully!");
    this->close();
}


void CreateUser::on_cancelButton_clicked()
{
    close();
}

