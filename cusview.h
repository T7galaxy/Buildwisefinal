#ifndef CUSVIEW_H
#define CUSVIEW_H

#include <QMainWindow>

namespace Ui {
class cusview;
}

class cusview : public QMainWindow
{
    Q_OBJECT

public:
    explicit cusview(QWidget *parent = nullptr);
    ~cusview();

private:
    Ui::cusview *ui;
};

#endif // CUSVIEW_H
