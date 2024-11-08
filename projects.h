#ifndef PROJECTS_H
#define PROJECTS_H

#include <QWidget>
#include <QTableWidget>
#include <QInputDialog>
#include <QMessageBox>

namespace Ui {
class Projects;
}

class Projects : public QWidget
{
    Q_OBJECT

public:
    explicit Projects(QWidget *parent = nullptr);
    ~Projects();

private slots:
    void on_addProjectButton_clicked();
    void on_editProjectButton_clicked();
    void on_deleteProjectButton_clicked();

private:
    Ui::Projects *ui;
};

#endif // PROJECTS_H
