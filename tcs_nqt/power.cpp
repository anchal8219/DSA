#include <bits/stdc++.h>
using namespace std;

int power(int n, int r){
    if(n==0) return 0;
    if(r==0) return 1;
    if(r%2==0){
        int ans = power(n,r/2);
        return ans * ans;
    }
    else{
        int ans = power(n,(r-1)/2);
        return n*ans*ans;
    }
}

int main(){
    int n,r;
    cin>>n>>r;

    cout<<power(n,r);

}