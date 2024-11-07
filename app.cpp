#include <iostream>
#include <string>
#include "ChatSystem.h"

using namespace std;

int main() {
    ChatSystem chatSystem;
    string username;
    string message;

    // Input username
    cout << "Enter your username: ";
    getline(cin, username);

    cout << "\nWelcome to the chat, " << username << "!\n";
    cout << "Type your messages below. Type 'exit' to quit.\n";

    while (true) {
        // Display chat history
        chatSystem.displayChatHistory();
      
        cout << "\nEnter message: ";
        getline(cin, message);

        if (message == "exit") {
            cout << "Exiting chat...\n";
            break;
        }

        // Send the message
        chatSystem.sendMessage(username, message);
    }

    return 0;
}
