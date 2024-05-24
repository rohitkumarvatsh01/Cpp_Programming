#include<iostream>
using namespace std;

int minElement(int arr[], int n){
    int min=arr[0];

    for(int i=0; i<n; i++){
        if(arr[i] < min){
            min=arr[i];
        }
    }
    return min;
}

int maxElement(int arr[], int n){
    int max=arr[0];

    for(int i=0; i<n; i++){
        if(arr[i] > max){
            max=arr[i];
        }
    }
    return max;
}

int main(){

    int n;
    cout<<"Enter the Size of the Array:- "<<endl;
    cin>>n;
    
    int arr[n];
    cout<<"Enter the element in the Array:- "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    cout<<"The Minimum Element in the Array:- "<<minElement(arr, n)<<endl;
    cout<<"The Maximum Element in the Array:- "<<maxElement(arr, n)<<endl;


    return 0;
}