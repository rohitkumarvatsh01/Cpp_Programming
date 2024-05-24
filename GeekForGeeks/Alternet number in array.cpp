#include<iostream>
using namespace std;

void printAlter(int arr[], int n){
    // for(int currIndex=1; currIndex<n+1; currIndex++){
    //     if(currIndex%2!=0){
    //         cout<<currIndex<<" ";
    //     }
    // }

    //GFG Method
    for(int i=0; i<n; i+=2){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    printAlter(arr, n);
    return 0;
}