#ifndef NOTIFICATIONMODULEUI_H
#define NOTIFICATIONMODULEUI_H

#include <QWidget>
#include <QPushButton>
#include <QLineEdit>
#include <QListWidget>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include "NotificationModule.h"

class NotificationModuleUI : public QWidget {
    Q_OBJECT

public:
    explicit NotificationModuleUI(QWidget *parent = nullptr);

private slots:
    void sendNotification();

private:
    NotificationModule notificationModule;
    QLineEdit *messageInput;
    QPushButton *sendButton;
    QListWidget *notificationList;
};

#endif // NOTIFICATIONMODULEUI_H
