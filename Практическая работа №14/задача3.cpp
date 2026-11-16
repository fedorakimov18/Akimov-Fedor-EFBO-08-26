// Акимов Фёдор, ЭФБО-08-26
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Stack {
    struct Node {
        int value;
        int minimum;
        Node* next;
    };

    Node* top = nullptr;

public:
    Stack() = default;
    Stack(const Stack&) = delete;
    Stack& operator=(const Stack&) = delete;

    bool empty() const {
        return top == nullptr;
    }

    void push(int value) {
        int minimum = empty() ? value : min(value, top->minimum);
        top = new Node{value, minimum, top};
    }

    int pop() {
        Node* node = top;
        int value = node->value;
        top = node->next;
        delete node;
        return value;
    }

    int minimum() const {
        return top->minimum;
    }

    ~Stack() {
        while (!empty())
            pop();
    }
};

int main() {
    Stack stack;
    string command;
    while (cin >> command) {
        if (command == "push") {
            int value;
            if (!(cin >> value))
                break;
            stack.push(value);
        } else if (command == "empty") {
            cout << (stack.empty() ? "yes" : "no") << endl;
        } else if (command == "pop" || command == "min") {
            if (stack.empty())
                cout << "empty" << endl;
            else if (command == "pop")
                cout << stack.pop() << endl;
            else
                cout << stack.minimum() << endl;
        } else if (command == "exit") {
            break;
        }
    }
    return 0;
}
