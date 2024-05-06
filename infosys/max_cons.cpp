#include<bits/stdc++.h>
using namespace std;

int maxConsecutiveOnes(vector<int>a){
    int c=0,mx=INT_MIN;
    for(int i=0;i<a.size();i++){
        if(a[i]==1){
            c++;
        }
        else{
            mx = max(mx,c);
            c=0;
        }
    }
    return mx;
}

int main(){
    vector<int>v={0,1,1,1,1,0,1,1,1,1,1,1,0,1,0};
    cout<<maxConsecutiveOnes(v);
}