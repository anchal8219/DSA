#include <bits/stdc++.h>
using namespace std;

// void transpose(vector<vector<int>> a)
// {
//     int m = a.size();
//     int n = a[0].size();

//     // for (int i = 0; i < m; i++)
//     // {
//     //     for (int j = 0; j < n; j++)
//     //     {
//     //         swap(a[i][j], a[j][i]);
//     //     }
//     // }
//     // for (int i = 0; i < m; i++)
//     // {
//     //     for (int j = 0; j < n; j++)
//     //     {
//     //         cout << a[j][i] << " ";
//     //     }
//     //     cout << endl;
//     // }

//     //or
//     for (int i = 0; i < n; i++) {
//     for (int j = 0; j < m; j++) {
//         cout << a[j][i] << " ";
//     }
//     cout << endl;
// }

// }

// void printSnakepattern(vector<vector<int>>a){
//     int m=a.size();
//     int n=a[0].size();
//     for(int i=0;i<m;i++){
//         if(i%2==0){
//             for(int j=0;j<n;j++){
//                 cout<<a[i][j]<<" ";
//             }
//             cout<<endl;
//         }
//         else{
//             for(int j=n-1;j>=0;j--){
//                 cout<<a[i][j]<<" ";
//             }
//             cout<<endl;
//         }
//     }
// }


void printBoundary(vector<vector<int>>a){
    int r=a.size();
    int c=a[0].size();

    for(int j=0;j<c;j++)
    cout<<a[0][j]<<" ";

    for(int i=1;i<r;i++)
    cout<<a[i][c-1]<<" ";

    for(int j=c-2;j>=0;j--)
    cout<<a[r-1][j]<<" ";

    for(int i=r-2;i>0;i--)
    cout<<a[i][0]<<" ";
}


int main()
{
    int m, n;
    cin >> m >> n;
    vector<vector<int>> a(m, vector<int>(n));

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    // cout << "Transpose of the matrix:" << endl;
    // transpose(a);

    // cout << "Snake Pattern of the matrix:" << endl;
    // printSnakepattern(a);

    cout << "Boundary of the matrix:" << endl;
    printBoundary(a);

    return 0;
}