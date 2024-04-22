#include <iostream>

using namespace std;

int main()
{
    // cout<<"Hello World";
    
    int n;
    cin>>n;
    int a[5]={};
    
    //push the element
    
    int push(int arr,int x){
        
        a[n+1]=x;
        
    }
    for(int i=0;i<3;i++){
        a[i]=2;
    }
    

    return 0;
}



a = [1,2,3,2,1,3,4];
b= [1,2];

int k=0;
for(int i=0;i<a.size();i++){
    for(int j=0;j<b.size();j++){
        if(a[i]==a[j]){
            while(k<a.size()-1){
                a[i]=a[i+1];
                k++;
            }
        }
    }
}




















