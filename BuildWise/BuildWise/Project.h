#ifndef PROJECT_H
#define PROJECT_H

#include <string>
#include <vector>
#include "Task.h"

class Project {
private:
    std::string projectId;
    std::string name;
    std::vector<Task> tasks;
    std::string startDate;
    std::string endDate;

public:
    Project(const std::string& id, const std::string& n, const std::string& start, const std::string& end);

    void addTask(const Task& task);
    std::vector<Task> getTasks() const;
    std::string getName() const;
    std::string getId() const;
};

#endif // PROJECT_H

