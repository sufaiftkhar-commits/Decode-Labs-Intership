#include <iostream>
#include <string>
#include <algorithm> 
using namespace std;
string toLower(string str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    return str;
}
int main() {
    string userInput; 
    cout << "========================================\n";
    cout << "   Welcome to the Rule-Based AI Chatbot!\n";
    cout << "========================================\n";
    cout << "Bot: Hello! How can I help you today? (Type 'exit' to quit)\n\n";
    while (true) {
        cout << "You: ";
        getline(cin, userInput);
        string query = toLower(userInput);
        if (query == "exit" || query == "bye" || query == "quit") {
            cout << "Bot: Goodbye! Have a great day ahead! ??\n";
            break;
        }
        else if (query == "hello" || query == "hi" || query == "hey" || query == "assalam-o-alaikum") {
            cout << "Bot: Hi there! Nice to chat with you.\n";
        }
        else if (query == "how are you" || query == "how are you?") {
            cout << "Bot: I'm just a computer program, but I'm doing great! How about you?\n";
        }
        else if (query == "what is your name" || query == "who are you") {
            cout << "Bot: I am a simple rule-based AI chatbot created in C++.\n";
        }
        else if (query == "help" || query == "what can you do") {
            cout << "Bot: I can respond to basic greetings and simple questions. Try saying 'hello', asking 'how are you', or type 'exit' to quit.\n";
        }
        else {
            cout << "Bot: I'm sorry, I don't understand that command. Type 'help' to see what I can do.\n";
        }
        cout << endl; 
    }
    return 0;
}
