#include<bits/stdc++.h>
using namespace std;

void missing_char(string s1,string s2){
    // int i=0,n=s1.length();
    // while(i<n){
    //     if(s2.find(s1[i]) == string::npos){
    //         return s1[i];

    //     }
        
    //     else i++;
    // }
    // return s1[0];

    //or
    unordered_map<char,int>mp;
    for(char i:s1){
        mp[i]++;

    }
    for(auto j:mp)
    cout<<j.first<<j.second<<endl;
    
    for(char i:s2){
        if(mp[i]==0) mp.erase(i);
        else mp[i]--;
    }

    for(auto j:mp)
    cout<<j.first<<j.second<<endl;
}

int main(){
    string s1,s2;
    cin>>s1>>s2;
    missing_char(s1,s2);
    
    return 0;
}