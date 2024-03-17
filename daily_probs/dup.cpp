#include<bits/stdc++.h>
using namespace std;

int firstNonDuplicateLetter(string s){
    unordered_map<char,int>m;

    for(auto i:s){
        m[i]++;
    }
    for(auto i=0;i<s.length();i++){
        if(m[s[i]]==1)
        return i;
    }
    return -1;
}

int main(){
    string s;
    cin>>s;
    cout<<firstNonDuplicateLetter(s);
}