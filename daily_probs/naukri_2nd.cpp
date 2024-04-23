
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[4][5];
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            cin>>a[i][j];
            
        }
    }

    int c,mx=INT_MIN;
    int dv;
    
    for(int i=0;i<4;i++){
        c=0;
        for(int j=0;j<5;j++){
            if(a[i][j]==1) c++;
        }
        if(c>mx) {
            dv = i;
            mx = max(mx,c);
        }
        // mx = 
    }
    cout<<mx<<"in "<<dv+1<<" row";
    
    

    return 0;
}
