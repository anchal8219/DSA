#include <iostream>
#include <string>
using namespace std;

string duplicateCharacters(const string& str) {
    string res="";
    for(auto i:str){
        res += i;
        res+=i;
    }
    return res;
}

int main() {
    string input = "helloworld";
    string output = duplicateCharacters(input);
    cout << "Original string: " << input << endl;
    cout << "Duplicated string: " << output << endl;
    return 0;
}
