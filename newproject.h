#ifndef NEWPROJECT_H
#define NEWPROJECT_H

#include <QMainWindow>

namespace Ui {
class Newproject;
}

class Newproject : public QMainWindow
{
    Q_OBJECT

public:
    explicit Newproject(QWidget *parent = nullptr);
    ~Newproject();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Newproject *ui;
};

#endif // NEWPROJECT_H
