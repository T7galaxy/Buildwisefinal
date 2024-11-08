#include "projects.h"
#include "ui_projects.h"

Projects::Projects(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Projects)
{
    ui->setupUi(this);

    // Set up the project table
    ui->projectTable->setColumnCount(4); // Number of columns
    ui->projectTable->setHorizontalHeaderLabels({"Project Name", "Start Date", "End Date", "Status"});
    ui->projectTable->horizontalHeader()->setStretchLastSection(true); // Stretch last column
}

Projects::~Projects()
{
    delete ui;
}

void Projects::on_addProjectButton_clicked()
{
    // Prompt for project details
    bool ok;
    QString projectName = QInputDialog::getText(this, "Add Project", "Enter project name:", QLineEdit::Normal, "", &ok);
    if (ok && !projectName.isEmpty()) {
        int row = ui->projectTable->rowCount();
        ui->projectTable->insertRow(row);
        ui->projectTable->setItem(row, 0, new QTableWidgetItem(projectName));

        // For simplicity, setting placeholders for dates and status
        ui->projectTable->setItem(row, 1, new QTableWidgetItem("Start Date"));
        ui->projectTable->setItem(row, 2, new QTableWidgetItem("End Date"));
        ui->projectTable->setItem(row, 3, new QTableWidgetItem("Pending"));
    }
}

void Projects::on_editProjectButton_clicked()
{
    int row = ui->projectTable->currentRow();
    if (row >= 0) {
        bool ok;
        QString projectName = QInputDialog::getText(this, "Edit Project", "Enter new project name:", QLineEdit::Normal, ui->projectTable->item(row, 0)->text(), &ok);
        if (ok && !projectName.isEmpty()) {
            ui->projectTable->setItem(row, 0, new QTableWidgetItem(projectName));
        }
    } else {
        QMessageBox::warning(this, "Edit Project", "Please select a project to edit.");
    }
}

void Projects::on_deleteProjectButton_clicked()
{
    int row = ui->projectTable->currentRow();
    if (row >= 0) {
        ui->projectTable->removeRow(row);
    } else {
        QMessageBox::warning(this, "Delete Project", "Please select a project to delete.");
    }
}
