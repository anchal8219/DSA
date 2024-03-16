#include <iostream>

using namespace std;

// 1.
int main()
{

    int i, n, j ;

        cin >> n;

    for (i = 1; i <= n; i++){

        for (j = 1; j <= i; j++)

        
        cout << "*";
        

    cout<< "\n";
    }
}


// 2.
int main()
{

    int i, n, j ;

        cin >> n;

    for (i = n; i >=1; i--){

        for (j = 1; j <= i; j++)

        
        cout << "*";
        

    cout<< "\n";
    }
}


// 3.
int main()
{

    int i, n, j ;

        cin >> n;

    for (i = 1; i <= n; i++){

        for (j = n-i; j >=1; j--)

        {
            cout << " ";
        }

        for (int k = 1; k <= i; k++)

        {
            cout << "*";
        }

    cout<< "\n";
    }
}

// 4.
int main()
{

    int i, n, j ;

        cin >> n;

    for (i = n; i >= 1; i--){

        for (j = n-i; j >=1; j--)

        {
            cout << " ";
        }

        for (int k = i; k >= 1; k--)

        {
            cout << "*";
        }

    cout<< "\n";
    }
}