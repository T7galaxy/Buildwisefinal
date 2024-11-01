#ifndef USER_H
#define USER_H

#include <string>

class User {
private:
    std::string userId;
    std::string name;
    std::string role;  // Either "ProjectManager" or "TeamMember"
    std::string contactInfo;

public:
    User(const std::string& id, const std::string& n, const std::string& r, const std::string& contact);

    std::string getName() const;
    std::string getId() const;
    std::string getRole() const;
    void receiveNotification(const std::string& notification) const;
};

#endif // USER_H
