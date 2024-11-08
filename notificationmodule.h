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

    // Add this getter function
    const std::vector<std::string>& getNotificationLog() const {
        return notificationLog;
    }
};

#endif // NOTIFICATIONMODULE_H
