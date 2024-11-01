#ifndef DATABASE_H
#define DATABASE_H

#include <vector>
#include <string>
#include "User.h"
#include "Task.h"
#include "Project.h"

class Database {
private:
    std::vector<User> users;
    std::vector<Task> tasks;
    std::vector<Project> projects;

public:
    void addUser(const User& user);
    User* getUserById(const std::string& userId);

    void addTask(const Task& task);
    Task* getTaskById(const std::string& taskId);

    void addProject(const Project& project);
    Project* getProjectById(const std::string& projectId);
};

#endif // DATABASE_H
