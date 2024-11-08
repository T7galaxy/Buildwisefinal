#ifndef CUSTOMERVIEW_H
#define CUSTOMERVIEW_H

#include <QMainWindow>

namespace Ui {
class customerview;
}

class customerview : public QMainWindow
{
    Q_OBJECT

public:
    explicit customerview(QWidget *parent = nullptr);
    ~customerview();

private:
    Ui::customerview *ui;
};

#endif // CUSTOMERVIEW_H
