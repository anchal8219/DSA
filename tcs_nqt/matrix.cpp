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

void printSnakepattern(vector<vector<int>>a){
    int m=a.size();
    int n=a[0].size();
    for(int i=0;i<m;i++){
        if(i%2==0){
            for(int j=0;j<n;j++){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
        else{
            for(int j=n-1;j>=0;j--){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }
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

    cout << "Snake Pattern of the matrix:" << endl;
    printSnakepattern(a);
    return 0;
}