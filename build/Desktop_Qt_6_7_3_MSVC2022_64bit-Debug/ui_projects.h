/********************************************************************************
** Form generated from reading UI file 'projects.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJECTS_H
#define UI_PROJECTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Projects
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *projectTable;
    QPushButton *addProjectButton;
    QPushButton *editProjectButton;
    QPushButton *deleteProjectButton;

    void setupUi(QWidget *Projects)
    {
        if (Projects->objectName().isEmpty())
            Projects->setObjectName("Projects");
        Projects->resize(400, 300);
        verticalLayout = new QVBoxLayout(Projects);
        verticalLayout->setObjectName("verticalLayout");
        projectTable = new QTableWidget(Projects);
        projectTable->setObjectName("projectTable");

        verticalLayout->addWidget(projectTable);

        addProjectButton = new QPushButton(Projects);
        addProjectButton->setObjectName("addProjectButton");

        verticalLayout->addWidget(addProjectButton);

        editProjectButton = new QPushButton(Projects);
        editProjectButton->setObjectName("editProjectButton");

        verticalLayout->addWidget(editProjectButton);

        deleteProjectButton = new QPushButton(Projects);
        deleteProjectButton->setObjectName("deleteProjectButton");

        verticalLayout->addWidget(deleteProjectButton);


        retranslateUi(Projects);

        QMetaObject::connectSlotsByName(Projects);
    } // setupUi

    void retranslateUi(QWidget *Projects)
    {
        Projects->setWindowTitle(QCoreApplication::translate("Projects", "Form", nullptr));
        addProjectButton->setText(QCoreApplication::translate("Projects", "Add Project", nullptr));
        editProjectButton->setText(QCoreApplication::translate("Projects", "Edit Project", nullptr));
        deleteProjectButton->setText(QCoreApplication::translate("Projects", "Delete Project", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Projects: public Ui_Projects {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECTS_H
