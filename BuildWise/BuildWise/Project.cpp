#include "Project.h"

Project::Project(const std::string& id, const std::string& n, const std::string& start, const std::string& end)
    : projectId(id), name(n), startDate(start), endDate(end) {}

void Project::addTask(const Task& task) {
    tasks.push_back(task);
}

std::vector<Task> Project::getTasks() const {
    return tasks;
}

std::string Project::getName() const { return name; }
std::string Project::getId() const { return projectId; }
