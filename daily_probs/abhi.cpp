#include <bits/stdc++.h>
using namespace std;

string character_replacement(string &s, string &r, string &rw){
    int l=r.length(),l1=rw.length(),ln=s.length();
    int ind = s.find(r);
    // cout<<ind<<endl;
    int i=0,k=0;
    string sm="";
    unordered_map<char,int>mp={{'a',1},{'b',2},{'c',3},{'d',4},{'e',5},{'f',6},{'g',7},{'h',8},{'i',9},{'j',10},{'k',11},{'l',12},{'m',13},{'n',14},{'o',15},{'p',16},{'q',17},{'r',18},{'s',19},{'t',20},{'u',21},{'v',22},{'w',23},{'x',24},{'y',25},{'z',26}};
    while(i<ln){
        if(i==ind){
            s.replace(i,r.length(),rw);
            while(l1--){
                // s[i]=rw[k];
                int g =mp[rw[k]];
                sm+=to_string(g);
                // cout<<rw[k]<<mp[rw[k]]<<endl;
                k++;
                // i++;
            }
            break;
        }
        i++;
    
    }
    return s+" "+sm;
}


int main(){
    string s="hi soham";
    string rep = "soham";
    string rep_with = "sp";
    cout<<character_replacement(s,rep,rep_with);
}