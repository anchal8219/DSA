#include <iostream>
#include <cstring>
using namespace std;

bool is_palindrome(const char* s, int start, int end) {
    while (start < end) {
        if (s[start] != s[end])
            return false;
        start++;
        end--;
    }
    return true;
}

string winner_of_game(int n, const char* s) {
    for (int len = 2; len <= n; ++len) {
        for (int start = 0; start <= n - len; ++start) {
            int end = start + len - 1;
            if (is_palindrome(s, start, end)) {
                // Alice wins by removing a character from the palindrome
                return "Alice";
            }
        }
    }
    // If no palindromic substring found, Bob wins
    return "Bob";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        char s[n + 1];
        cin >> s;
        cout << winner_of_game(n, s) << endl;
    }
    return 0;
}
