#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k,j,m,p;
    cin>>n>>k>>j>>m>>p;
    int a = m/k;
    int b = p/j;
    cout<<(n-(a+b));
    return 0;
}