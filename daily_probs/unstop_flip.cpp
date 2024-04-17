#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    string s;
    getline(cin, s);

    stack<int> recursiveStack;

    for (int i = 0; i < s.length(); i += 4) {
        if (s[i] == 'P') {
            recursiveStack.push(s[i + 2] - '0');
        } 
        // Process 'B'
        else if (s[i] == 'B') {
            int baseCondition = s[i + 2] - '0';
            if (recursiveStack.empty() || recursiveStack.top() != baseCondition) {
                recursiveStack.push(baseCondition);
                break;
            }
            recursiveStack.pop();
        } else {
            cout << -1 << endl; 
            return 0;
        }
    }


    if (!recursiveStack.empty()) {
        cout << recursiveStack.size() << endl; 
    } else {
        cout << -1 << endl; 
    }

    return 0;
}