/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *usernameInput;
    QPushButton *loginButton;
    QLineEdit *passwordInput;
    QLabel *label;
    QPushButton *createUserButton;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(298, 181);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        usernameInput = new QLineEdit(centralwidget);
        usernameInput->setObjectName("usernameInput");

        gridLayout->addWidget(usernameInput, 0, 1, 1, 1);

        loginButton = new QPushButton(centralwidget);
        loginButton->setObjectName("loginButton");

        gridLayout->addWidget(loginButton, 2, 0, 1, 2);

        passwordInput = new QLineEdit(centralwidget);
        passwordInput->setObjectName("passwordInput");
        passwordInput->setEchoMode(QLineEdit::EchoMode::Password);

        gridLayout->addWidget(passwordInput, 1, 1, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        createUserButton = new QPushButton(centralwidget);
        createUserButton->setObjectName("createUserButton");

        gridLayout->addWidget(createUserButton, 3, 0, 1, 2);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Login", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        loginButton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        createUserButton->setText(QCoreApplication::translate("MainWindow", "Create User", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
