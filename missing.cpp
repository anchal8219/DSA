#include<bits/stdc++.h>
using namespace std;

char missing_char(string s1,string s2){
    int i=0,n=s1.length();
    while(i<n){
        if(s2.find(s1[i]) == string::npos){
            return s1[i];

        }
        
        else i++;
    }
    return s1[0];

    
}

int main(){
    string s1,s2;
    cin>>s1>>s2;
    cout<<missing_char(s1,s2);
    
    return 0;
}