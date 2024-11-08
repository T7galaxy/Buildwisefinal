#include "user.h"

User::User(const QString &username, Role role) : username(username), role(role) {}

QString User::getUsername() const { return username; }
User::Role User::getRole() const { return role; }
bool User::isProjectManager() const { return role == ProjectManager; }
bool User::isSubcontractor() const { return role == Subcontractor; }
