#include <iostream>

using namespace std;

int main()
{

    int i, n, j ;

        cin >> n;

    for (i = 1; i <= n; i++){

        for (j = 1; j <= (n - i); j++)

        {
            cout << " ";
        }

        for (int k = (n - i + 1); k <= n; k++)

        {
            cout << "*";
        }

    cout<< "\n";
    }
}