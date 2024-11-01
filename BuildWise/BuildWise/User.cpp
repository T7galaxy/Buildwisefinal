#include "User.h"
#include <iostream>

User::User(const std::string& id, const std::string& n, const std::string& r, const std::string& contact)
    : userId(id), name(n), role(r), contactInfo(contact) {}

std::string User::getName() const { return name; }
std::string User::getId() const { return userId; }
std::string User::getRole() const { return role; }

void User::receiveNotification(const std::string& notification) const {
    std::cout << "Notification for " << name << ": " << notification << std::endl;
}
