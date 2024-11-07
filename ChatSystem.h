#ifndef CHATSYSTEM_H
#define CHATSYSTEM_H

#include "ChatMessage.h"
#include <vector>
#include <string>

class ChatSystem {
public:
    // Method to display chat history
    void displayChatHistory() const;

    // Method to send messages
    void sendMessage(std::string sender, std::string message);

private:
    std::vector<ChatMessage> messages; // Store messages
};

#endif 
