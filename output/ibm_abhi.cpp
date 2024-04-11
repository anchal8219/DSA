// #include <bits/stdc++.h>

// using namespace std;

// int getMaximumMEX(vector<int>& arr) {
//     int c=0,n=arr.size();
//     unordered_map<int,int>m;

//     for(auto i=0;i<n;i++){
//         for(auto j=0;j<=arr[i];j++){
//             if(m.find(j)!=m.end()) continue;
//             else{
//                 c++;
//                 m[j]=1;
//             }
//         }
//     }
        
//     return c;
// }

// int main() {
//     ofstream fout(getenv("OUTPUT_PATH"));
//     string arr_count_temp;
//     getline(cin, arr_count_temp);
//     int arr_count = stoi(arr_count_temp);
//     vector<int> arr(arr_count);
//     for (int i = 0; i < arr_count; i++) {
//         string arr_item_temp;
//         getline(cin, arr_item_temp);
//         int arr_item = stoi(arr_item_temp);
//         arr[i] = arr_item;
//     }
//     int result = getMaximumMEX(arr);
//     fout << result << "\n";
//     fout.close();
//     return 0;
// }
