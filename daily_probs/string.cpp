#include<bits/stdc++.h>
using namespace std;

int main(){
    string s2,s1;
    cin>>s1>>s2;
    string a1="",a2="";
    for(size_t i=0;i<s1.length();i++)
    a1 += tolower(s1[i]);

    for(size_t i=0;i<s2.length();i++)
    a2 += tolower(s2[i]);
    // transform(s1.begin(),s1.end(),s1.begin(),::tolower);
    // transform(s2.begin(),s2.end(),s2.begin(),::tolower);
    sort(a1.begin(),a1.end());
    sort(a2.begin(),a2.end());
    cout<< (a2==a1);
}