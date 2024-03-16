#include <bits/stdc++.h>

using namespace std;

int getMaximumMEX(vector<int>& arr) {
    // Remove duplicates
    sort(arr.begin(), arr.end());
    arr.erase(unique(arr.begin(), arr.end()), arr.end());
    
    // Sort the array
    sort(arr.begin(), arr.end());
    
    // Find MEX
    int mex = 0;
    for (int num : arr) {
        if (num == mex) {
            mex++;
        } else if (num < mex) {
            continue;
        } else {
            break;
        }
    }
    return mex;
}

int main() {
    string arr_count_temp;
    getline(cin, arr_count_temp);
    int arr_count = stoi(arr_count_temp);
    vector<int> arr(arr_count);
    for (int i = 0; i < arr_count; i++) {
        string arr_item_temp;
        getline(cin, arr_item_temp);
        int arr_item = stoi(arr_item_temp);
        arr[i] = arr_item;
    }
    int result = getMaximumMEX(arr);
    cout << result << "\n";
    return 0;
}
