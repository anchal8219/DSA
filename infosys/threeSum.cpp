#include <bits/stdc++.h>
using namespace std;

vector<int> threeSum(int n, vector<int>& arr, int target) {
    sort(arr.begin(), arr.end());

    for(int i = 0; i < n - 2; i++) {
        int j = i + 1, k = n - 1;
        while(j < k) {
            int sum = arr[i] + arr[j] + arr[k];
            if(sum == target) {
                return {i, j, k};
            } else if(sum < target) {
                j++;
            } else {
                k--;
            }
        }
    }
    return {};
}


int main() {
    vector<int> arr = {2, 6, 5, 8, 11};
    int n=arr.size();
    int target = 19;
    vector<int> v = threeSum(n,arr, target);
    
    if (!v.empty()) {
        cout << "Indices: ";
        for (int i : v) {
            cout << i << " ";
        }
        cout << endl;
    } else {
        cout << "No such triplet found!" << endl;
    }
    
    return 0;
}
