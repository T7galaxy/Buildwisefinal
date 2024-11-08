#ifndef DASHBOARD_H
#define DASHBOARD_H

#include <QWidget>

namespace Ui {
class Dashboard;
}

class Dashboard : public QWidget
{
    Q_OBJECT

public:
    explicit Dashboard(QWidget *parent = nullptr);
    ~Dashboard();

private slots:
    void on_projectsButton_clicked();
    void on_tasksButton_clicked();
    void on_notificationsButton_clicked();
    void on_userManagementButton_clicked();

private:
    Ui::Dashboard *ui;
};

#endif // DASHBOARD_H
