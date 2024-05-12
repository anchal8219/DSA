#include<bits/stdc++.h>
using namespace std;

void countSort(int a[],int n){
    
    int mx = INT_MIN;

    //find max element
    for(int i=0;i<n;i++)
    mx = max(mx,a[i]);

    int count[mx+1],output[n];

    //assign all to zero
    for(int i=0;i<=mx;i++){
        count[i] = 0;
    }

    //count frequency of each element 
    for(int i=0;i<n;i++){
        count[a[i]]++;
    }

    //cumulative sum
    for(int i=1;i<=mx;i++){
        count[i]+=count[i-1];
    }

    // Find the index of each element of the original array in count array, and place the elements in output array
    for (int i = n-1; i >= 0; i--){
        output[count[a[i]]-1] = a[i];
        count[a[i]]--;
    }

    for (int i = 0; i < n; i++) {
    a[i] = output[i];
  }
}

void printArray(int array[], int size) {
  for (int i = 0; i < size; i++)
    cout << array[i] << " ";
  cout << endl;
}

int main(){
    int array[] = {4, 2, 2, 5, 8, 3, 3, 1};
    int n = sizeof(array) / sizeof(array[0]);
    countSort(array, n);
    printArray(array, n);
}