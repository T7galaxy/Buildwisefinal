#ifndef CHATMESSAGE_H
#define CHATMESSAGE_H

#include <string>
#include <ctime>
#include <iostream>

class ChatMessage {
public:
    // Constructor
    ChatMessage(std::string sender, std::string message);

    // Method to display message
    void displayMessage() const;

    // Getter for message sender
    std::string getSender() const;

    std::string getMessage() const;

    std::string getTimestamp() const;

private:
    std::string sender;
    std::string message;
    std::string timestamp;

    // Helper function to get current time
    std::string getCurrentTimestamp() const;
};

#endif
