// Акимов Фёдор, ЭФБО-08-26
#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    string text;
    getline(cin, text);
    stack<char> brackets;

    for (char c : text) {
        if (c == '(' || c == '[' || c == '{') {
            brackets.push(c);
        } else if (c == ')' || c == ']' || c == '}') {
            if (brackets.empty()) {
                cout << "no" << endl;
                return 0;
            }
            char opening = brackets.top();
            if ((c == ')' && opening != '(') ||
                (c == ']' && opening != '[') ||
                (c == '}' && opening != '{')) {
                cout << "no" << endl;
                return 0;
            }
            brackets.pop();
        }
    }

    cout << (brackets.empty() ? "yes" : "no") << endl;
    return 0;
}
