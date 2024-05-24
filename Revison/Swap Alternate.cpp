#include<iostream>
using namespace std;

void swapAlternate(int arr[], int n){
    for(int i=0; i<n; i+=2){
        if(i+1 < n){
            swap(arr[i], arr[i+1]);
        }
    }
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int n;
    cout<<"Enter the size of Array:- "<<endl;
    cin>>n;

    int arr[10];
    

    cout<<"Enter the element of Array:- "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    swapAlternate(arr, n);
    printArray(arr, n);

    return 0;
}