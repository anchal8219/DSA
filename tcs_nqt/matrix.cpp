#include <bits/stdc++.h>
using namespace std;

void transpose(vector<vector<int>> a)
{
    int m = a.size();
    int n = a[0].size();

    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         swap(a[i][j], a[j][i]);
    //     }
    // }
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << a[j][i] << " ";
    //     }
    //     cout << endl;
    // }

    //or
    for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
        cout << a[j][i] << " ";
    }
    cout << endl;
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

    cout << "Transpose of the matrix:" << endl;
    transpose(a);
    return 0;
}