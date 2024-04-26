#include<bits/stdc++.h>
using namespace std;

// a no. is prime if that number has divisors as 1 and itself only
//2 is the only even prime number
//other than prime , alll are composite numbers like 4,6,etc
// but 1 is neither prime nor composite

//1. naive approach
// bool isPrime(int n){
//     if(n==1) return false;
//     for(int i=2;i<n;i++){
//         if(n%i==0) return false;
//     }
//     return true;
// }

//2. efficient approach
// bool isPrime(int n){
//     if(n==1) return false;
//     for(int i=2;i*i<=n;i++){
//         if(n%i==0) return false;
//     }
//     return true;
// }

//3. most efficient approach
bool isPrime(int n){
    if(n==1) return false;
    if(n==2 || n==3) return true;
    if(n%2==0 || n%3==0) return false;

    for(int i=5;i*i<=n;i=i+6){
        if(n%i==0 || n%(i+2)==0) return false;
    }
    return true;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
    cin>>n;
    bool ans = isPrime(n);
    if(ans) cout<<"prime number"<<endl;
    else cout<<"not a prime number"<<endl;
    }
    
}