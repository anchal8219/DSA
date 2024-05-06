#include<bits/stdc++.h>
using namespace std;

vector<int>nextGreaterElement(vector<int>v){
    int n = v.size();
    vector<int>v1;
    int i=n-2;
    v1.push_back(v[0]);
    int g=v[n-1];
    while(i>=0){
        if(v[i+1]>g){
            g= v[i+1];
            v1.push_back(g);
        }
        else{
            if(v[i]>g){
                v1.push_back(0);
                g = v[i];
            }
            else{
                v1.push_back(g);
            }
        }
        i--;
    }
    reverse(v1.begin(),v1.end());
    return v1;
}

int main(){
    vector<int>v={1,9,4,6,5};
    vector<int>ans = nextGreaterElement(v);
    for(size_t i=0;i<ans.size();i++)
    cout<<ans[i]<<" ";

}