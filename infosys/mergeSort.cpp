#include<bits/stdc++.h>
using namespace std;

void merge(int a[],int l,int md,int h){
    vector<int>v;
    int lf = l,rg=md+1;
    while(lf<=md && rg<=h){
        if(a[lf]<=a[rg]){
            v.push_back(a[lf]);
            lf++;
        }
        else{
            v.push_back(a[rg]);
            rg++;
        }
    }
    while(lf<=md){
        v.push_back(a[lf]);
        lf++;
    }
    while(rg<=h){
        v.push_back(a[rg]);
        rg++;
    }
    for (int i = l; i <= h; i++) {
        a[i] = v[i - l];
    }
}

void mergeSort(int a[], int l, int h){
    if (l < h) {
        int md = (l + h) / 2;
        mergeSort(a, l, md);
        mergeSort(a, md + 1, h);
        merge(a, l, md, h);
    }
}

int main(){
    int a[]={4,5,3,6,1};
    int n = sizeof(a) / sizeof(a[0]);
    mergeSort(a,0,n-1);
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;


}