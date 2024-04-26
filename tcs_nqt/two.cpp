#include<bits/stdc++.h>
using namespace std;

string removeVowel(string s){
    string st="";
    for(int i=0;i<s.length();i++){
        if(s[i]=='a'|| s[i]=='i'|| s[i]=='e'|| s[i]=='o'|| s[i]=='u')
        continue;
        else
        st+=s[i];
    }
    return st;
}

int main(){
    string s;
    getline(cin,s);
    cout<<removeVowel(s);
    return 0;
    
}