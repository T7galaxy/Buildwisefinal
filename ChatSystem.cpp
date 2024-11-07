#include "ChatSystem.h"

void ChatSystem::displayChatHistory() const {
    if (messages.empty()) {
        std::cout << "No messages yet." << std::endl;
    } else {
        for (const auto& msg : messages) {
            msg.displayMessage();
        }
    }
}

void ChatSystem::sendMessage(std::string sender, std::string message) {
    // Create a new chat message 
    ChatMessage newMessage(sender, message);
    messages.push_back(newMessage);
}
