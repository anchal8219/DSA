#include<iostream>
#include<vector>
using namespace std;
#define ll long long 

ll misingNumber(vector<int> arr,ll n){
    ll actualSum = (n * (n + 1)) / 2;
    ll sum = 0;

    for(int i = 0 ; i < n - 1 ; i++){
        sum += arr[i];
    }
    return actualSum - sum;
}

int main(){
    ll n; 
    cin >> n;

    vector<int> arr(n);
    for(int i = 0 ; i < n - 1 ; i++){
        cin >> arr[i];
    }

    cout << misingNumber(arr,n) << endl;

    return 0;
}