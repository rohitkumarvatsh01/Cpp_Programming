//1. Write a C++ program to find the largest element of a given array of integers.

#include<iostream>
using namespace std;

int largestElement(int arr[], int n){
    int largest=arr[0];

    for(int i=0; i<n; i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }

    return largest;
}

int main(){
    
    int n;
    cout<<"Enter the size of Array:- "<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter the Element in the Array:- "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int ans=largestElement(arr, n);
    cout<<"The Largest Element in the Array:- "<<ans<<endl;

    return 0;
}