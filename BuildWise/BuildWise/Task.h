#ifndef TASK_H
#define TASK_H

#include <string>
#include "User.h"

class Task {
private:
    std::string taskId;
    std::string description;
    User assignedTo;
    std::string dueDate;
    std::string status;

public:
    Task(const std::string& id, const std::string& desc, const User& user, const std::string& due, const std::string& stat);

    // Getters
    std::string getId() const;
    std::string getDescription() const;
    User getAssignedUser() const;
    std::string getDueDate() const;     
    std::string getStatus() const;      

    // Method to update task status
    void updateStatus(const std::string& newStatus);
};

#endif // TASK_H
