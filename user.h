#ifndef USER_H
#define USER_H

#include <QString>

class User
{
public:
    enum Role { ProjectManager, Subcontractor };
    User(const QString &username, Role role);

    QString getUsername() const;
    Role getRole() const;
    bool isProjectManager() const;
    bool isSubcontractor() const;

private:
    QString username;
    Role role;
};

#endif // USER_H
