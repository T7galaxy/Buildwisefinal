/********************************************************************************
** Form generated from reading UI file 'createuser.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEUSER_H
#define UI_CREATEUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreateUser
{
public:
    QLabel *label;
    QLineEdit *usernameInput;
    QLabel *label_2;
    QLineEdit *passwordInput;
    QRadioButton *projectManagerRadioButton;
    QRadioButton *subcontractorRadioButton;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QWidget *CreateUser)
    {
        if (CreateUser->objectName().isEmpty())
            CreateUser->setObjectName("CreateUser");
        CreateUser->setWindowModality(Qt::WindowModality::ApplicationModal);
        CreateUser->resize(400, 300);
        label = new QLabel(CreateUser);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 35, 91, 31));
        usernameInput = new QLineEdit(CreateUser);
        usernameInput->setObjectName("usernameInput");
        usernameInput->setGeometry(QRect(202, 40, 141, 22));
        label_2 = new QLabel(CreateUser);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(50, 95, 81, 21));
        passwordInput = new QLineEdit(CreateUser);
        passwordInput->setObjectName("passwordInput");
        passwordInput->setGeometry(QRect(210, 100, 131, 22));
        passwordInput->setEchoMode(QLineEdit::EchoMode::Password);
        projectManagerRadioButton = new QRadioButton(CreateUser);
        projectManagerRadioButton->setObjectName("projectManagerRadioButton");
        projectManagerRadioButton->setGeometry(QRect(40, 160, 111, 20));
        subcontractorRadioButton = new QRadioButton(CreateUser);
        subcontractorRadioButton->setObjectName("subcontractorRadioButton");
        subcontractorRadioButton->setGeometry(QRect(40, 200, 111, 20));
        okButton = new QPushButton(CreateUser);
        okButton->setObjectName("okButton");
        okButton->setGeometry(QRect(80, 250, 75, 24));
        cancelButton = new QPushButton(CreateUser);
        cancelButton->setObjectName("cancelButton");
        cancelButton->setGeometry(QRect(200, 250, 75, 24));

        retranslateUi(CreateUser);

        QMetaObject::connectSlotsByName(CreateUser);
    } // setupUi

    void retranslateUi(QWidget *CreateUser)
    {
        CreateUser->setWindowTitle(QCoreApplication::translate("CreateUser", "Create New User", nullptr));
        label->setText(QCoreApplication::translate("CreateUser", "Username", nullptr));
        label_2->setText(QCoreApplication::translate("CreateUser", "Password", nullptr));
        projectManagerRadioButton->setText(QCoreApplication::translate("CreateUser", "Project Manager", nullptr));
        subcontractorRadioButton->setText(QCoreApplication::translate("CreateUser", "Subcontractor", nullptr));
        okButton->setText(QCoreApplication::translate("CreateUser", "Ok", nullptr));
        cancelButton->setText(QCoreApplication::translate("CreateUser", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateUser: public Ui_CreateUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEUSER_H
