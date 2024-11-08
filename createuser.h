#ifndef CREATEUSER_H
#define CREATEUSER_H

#include <QWidget>
#include "user.h"

namespace Ui {
class CreateUser;
}

class CreateUser : public QWidget
{
    Q_OBJECT

public:
    explicit CreateUser(QWidget *parent = nullptr);
    ~CreateUser();

private slots:
    void on_okButton_clicked();
    void on_cancelButton_clicked();

signals:
    void userCreated(User* newUser);  // Signal emitted when a new user is created

private:
    Ui::CreateUser *ui;
};

#endif // CREATEUSER_H
