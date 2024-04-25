#include <bits/stdc++.h>

using namespace std;

int squareInteger(int a,int b){
    int i=1,c=0;
    while(true){
        int sq = i*i;
        if(sq>b) break;
        if(sq>=a) c++;
        i++;

    }
    return c;
}


int main(){
    int a,b;
    cin>>a>>b;
    cout<<squareInteger(a,b);
    return 0;
}