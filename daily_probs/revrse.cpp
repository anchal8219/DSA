#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,r,re=0;
    cin>>n;
    stack<int>st;
    while (n != 0) {
    r = n % 10;
    st.push(r);
    // re = re * 10 + r;
    n /= 10;
  }
// for(int i=0;i<n.length();i++)
// st.push()
while(!st.empty()){
    cout<<st.top();
    st.pop();
}
    // string s = to_string(n);
    // int nm = s.length();
    // int i=0,j=nm-1;
    // while(i<j){
    //     swap(s[i],s[j]);
    //     i++;
    //     j--;
    // }
    // // cout<<s;
    // int g = stoi(s);
    // cout<<g;
}

// #include <stdio.h>

// int main() {

//   int n, reverse = 0, remainder;

//   printf("Enter an integer: ");
//   scanf("%d", &n);

//   while (n != 0) {
//     remainder = n % 10;
//     reverse = reverse * 10 + remainder;
//     n /= 10;
//   }

//   printf("Reversed number = %d", reverse);

//   return 0;
// }