#include "NotificationModule.h"
#include <iostream>

void NotificationModule::sendNotification(User& user, const std::string& message) {
    std::string notification = "Notification for " + user.getName() + ": " + message;
    notificationLog.push_back(notification);
    user.receiveNotification(message);
}

void NotificationModule::viewNotifications() const {
    std::cout << "All Notifications:\n";
    for (const auto& notification : notificationLog) {
        std::cout << notification << std::endl;
    }
}
