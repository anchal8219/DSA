#include <bits/stdc++.h>
using namespace std;

int countSetBits(int n){
    int c=0;
    while(n>0){
        if((n&1)==1)
        c++;
        n=n>>1;
    }
    return c;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<countSetBits(n);

    }
    
}