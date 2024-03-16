#include <iostream>
#include <string>

using namespace std;

string stringChanges(string str) {
    string result;
    char prev_char = '\0'; // Initialize with null character

    size_t i = 0;
    while (i < str.size()) {
        char c = str[i];
        if (c == 'M') {
            if (prev_char != '\0') {
                result += prev_char; // Duplicate the previous character
            }
        } else if (c == 'N') {
            if (i < str.size() - 1) {
                ++i; // Skip the next character
            }
        } else {
            result += c; // Add other characters to the result
            prev_char = c; // Update the previous character
        }
        ++i;
    }

    return result;
}

int main() {
    string str;
    cout << "Enter the string: ";
    cin >> str;

    string result = stringChanges(str);
    cout << "Modified string: " << result << endl;

    return 0;
}
