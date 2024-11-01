#include "Database.h"
#include <iostream>

void Database::addUser(const User& user) {
    users.push_back(user);
    std::cout << "User added: " << user.getName() << std::endl;
}

User* Database::getUserById(const std::string& userId) {
    for (auto& user : users) {
        if (user.getId() == userId) {
            return &user;
        }
    }
    return nullptr;
}

void Database::addTask(const Task& task) {
    tasks.push_back(task);
    std::cout << "Task added: " << task.getDescription() << std::endl;
}

Task* Database::getTaskById(const std::string& taskId) {
    for (auto& task : tasks) {
        if (task.getId() == taskId) {
            return &task;
        }
    }
    return nullptr;
}

void Database::addProject(const Project& project) {
    projects.push_back(project);
    std::cout << "Project added: " << project.getName() << std::endl;
}

Project* Database::getProjectById(const std::string& projectId) {
    for (auto& project : projects) {
        if (project.getId() == projectId) {
            return &project;
        }
    }
    return nullptr;
}
