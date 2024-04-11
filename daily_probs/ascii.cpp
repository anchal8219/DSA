#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;

        int n=s.length();
        while(i>=0){

        }
        string ls= s.substr(n-3,3);
        if(ls>122){
            ls = s.substr(n-2,2);
        }
        else ls=s.substr(n-3,3);
        cout<<ls;
    }
    
}