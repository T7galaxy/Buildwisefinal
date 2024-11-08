/********************************************************************************
** Form generated from reading UI file 'dashboard.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DASHBOARD_H
#define UI_DASHBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dashboard
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *projectsButton;
    QPushButton *tasksButton;
    QPushButton *notificationsButton;
    QPushButton *userManagementButton;

    void setupUi(QWidget *Dashboard)
    {
        if (Dashboard->objectName().isEmpty())
            Dashboard->setObjectName("Dashboard");
        Dashboard->resize(400, 300);
        verticalLayout = new QVBoxLayout(Dashboard);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(Dashboard);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font.setPointSize(11);
        font.setBold(true);
        label->setFont(font);

        verticalLayout->addWidget(label);

        projectsButton = new QPushButton(Dashboard);
        projectsButton->setObjectName("projectsButton");

        verticalLayout->addWidget(projectsButton);

        tasksButton = new QPushButton(Dashboard);
        tasksButton->setObjectName("tasksButton");

        verticalLayout->addWidget(tasksButton);

        notificationsButton = new QPushButton(Dashboard);
        notificationsButton->setObjectName("notificationsButton");

        verticalLayout->addWidget(notificationsButton);

        userManagementButton = new QPushButton(Dashboard);
        userManagementButton->setObjectName("userManagementButton");

        verticalLayout->addWidget(userManagementButton);


        retranslateUi(Dashboard);

        QMetaObject::connectSlotsByName(Dashboard);
    } // setupUi

    void retranslateUi(QWidget *Dashboard)
    {
        Dashboard->setWindowTitle(QCoreApplication::translate("Dashboard", "Form", nullptr));
        label->setText(QCoreApplication::translate("Dashboard", "Welcome to BuildWise", nullptr));
        projectsButton->setText(QCoreApplication::translate("Dashboard", "Projects", nullptr));
        tasksButton->setText(QCoreApplication::translate("Dashboard", "Tasks", nullptr));
        notificationsButton->setText(QCoreApplication::translate("Dashboard", "Notification", nullptr));
        userManagementButton->setText(QCoreApplication::translate("Dashboard", "User Management", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dashboard: public Ui_Dashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARD_H
