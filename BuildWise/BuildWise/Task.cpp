#include "Task.h"

Task::Task(const std::string& id, const std::string& desc, const User& user, const std::string& due, const std::string& stat)
    : taskId(id), description(desc), assignedTo(user), dueDate(due), status(stat) {}

std::string Task::getId() const { return taskId; }
std::string Task::getDescription() const { return description; }
User Task::getAssignedUser() const { return assignedTo; }
std::string Task::getDueDate() const { return dueDate; }     // Implementation for due date getter
std::string Task::getStatus() const { return status; }       // Implementation for status getter

void Task::updateStatus(const std::string& newStatus) {
    status = newStatus;
}
