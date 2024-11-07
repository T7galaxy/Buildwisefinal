#include "ChatMessage.h"
#include <sstream>

ChatMessage::ChatMessage(std::string sender, std::string message)
    : sender(sender), message(message) {
    this->timestamp = getCurrentTimestamp();
}

void ChatMessage::displayMessage() const {
    std::cout << "[" << timestamp << "] " << sender << ": " << message << std::endl;
}

std::string ChatMessage::getSender() const {
    return sender;
}

std::string ChatMessage::getMessage() const {
    return message;
}

std::string ChatMessage::getTimestamp() const {
    return timestamp;
}

std::string ChatMessage::getCurrentTimestamp() const {
    // Get current time in HH:MM:SS format
    std::time_t current_time = std::time(nullptr);
    std::tm* time_info = std::localtime(&current_time);

    char buffer[9];
    std::strftime(buffer, sizeof(buffer), "%H:%M:%S", time_info);

    return std::string(buffer);
}
