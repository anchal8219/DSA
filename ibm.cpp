#include<bits/stdc++.h>
using namespace std;

bool hasRepeatedDigits(int n) {
    string s= to_string(n);
    unordered_map<char,int>m;
    for(auto j:s)
    m[j]++;

    for(auto k:m){
        if(k.second>1) return false;
    }
    return true;
}

void countNumbers(vector<vector<int>> arr) {
    for (const auto& range : arr) {
        int lower = range[0];
        int upper = range[1];
        int count = 0;
        for (int num = lower; num <= upper; ++num) {
            if(num<10) count++;
            else {
                if (hasRepeatedDigits(num)==true)
                count++;
            }
                
        }
        cout << count << endl;
    }
}

int main() {
    vector<vector<int>> arr = {{1, 20}, {9, 19}};
    countNumbers(arr);
    return 0;
}
