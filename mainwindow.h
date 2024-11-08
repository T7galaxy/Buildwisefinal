#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QList>
#include "user.h"
#include "createuser.h"
#include "dashboard.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_createUserButton_clicked();
    void addUserToList(User* newUser);
    void on_loginButton_clicked();

private:
    Ui::MainWindow *ui;
    QList<User*> userList; // List to store users
};

#endif // MAINWINDOW_H
