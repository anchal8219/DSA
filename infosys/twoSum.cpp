#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(int n, vector<int> &arr, int target) {
    
    int i = 0, j = 1;
    while (i < n) {
        int sum = arr[i] + arr[j];
        if (sum != target) j++;
        else return {i,j};
        
        if(j==n){
            i++;
            j=i+1;
        }
    }
    return {};
}

int main()
{
    int n = 5;
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;
    vector<int>v = twoSum(n, arr, target);
    if (v.size() == 2) {
        cout << "Values: " << arr[v[0]] << " " << arr[v[1]] << endl;
    } else {
        cout << "No such pair found!" << endl;
    }
    
    return 0;
}