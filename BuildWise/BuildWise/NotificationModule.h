#ifndef NOTIFICATIONMODULE_H
#define NOTIFICATIONMODULE_H

#include <string>
#include <vector>
#include "User.h"

class NotificationModule {
private:
    std::vector<std::string> notificationLog;

public:
    void sendNotification(User& user, const std::string& message);
    void viewNotifications() const;
};

#endif // NOTIFICATIONMODULE_H
