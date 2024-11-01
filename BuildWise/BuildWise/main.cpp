#include <iostream>
#include "User.h"
#include "Task.h"
#include "Project.h"
#include "Database.h"
#include "NotificationModule.h"

int main() {
    // Create Users
    User projectManager("PM1", "Alice", "ProjectManager", "alice@example.com");
    User subcontractor("SC1", "Bob", "Subcontractor", "bob@example.com");

    // Create Database and Notification Module
    Database db;
    NotificationModule notifications;

    // Add Users to Database
    db.addUser(projectManager);
    db.addUser(subcontractor);

    // Create a Project
    Project project("P001", "New Building Project", "2024-11-01", "2025-04-01");

    // Add Project to Database
    db.addProject(project);

    // Create Tasks and Assign to Subcontractor
    Task task1("T001", "Lay the foundation", subcontractor, "2024-12-15", "Pending");
    Task task2("T002", "Install electrical wiring", subcontractor, "2025-01-10", "Pending");

    // Add Tasks to Project
    project.addTask(task1);
    project.addTask(task2);

    // Add Tasks to Database
    db.addTask(task1);
    db.addTask(task2);

    // Send Notifications to Users
    notifications.sendNotification(subcontractor, "You have been assigned a new task: " + task1.getDescription());
    notifications.sendNotification(subcontractor, "You have been assigned a new task: " + task2.getDescription());

    // View Notifications Log
    std::cout << "\nNotification Log:" << std::endl;
    notifications.viewNotifications();

    // Display Project and Task Information
    std::cout << "\nProject Details:" << std::endl;
    std::cout << "Project Name: " << project.getName() << std::endl;
    std::cout << "Project Tasks:" << std::endl;
    for (const auto& task : project.getTasks()) {
        std::cout << "- Task ID: " << task.getId()
            << ", Description: " << task.getDescription()
            << ", Assigned to: " << task.getAssignedUser().getName()
            << ", Due Date: " << task.getDueDate()            // Using getDueDate()
            << ", Status: " << task.getStatus() << std::endl;  // Using getStatus()
    }

    return 0;
}
