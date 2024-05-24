#include<iostream>
using namespace std;

int printArray(int arr[], int n){
    for(int i=0; i<n+1; i++){
        cout<<arr[i]<<" ";
    }
}

void bubbleSort(int arr[], int n){
    for(int i=1; i<n; i++){
        for(int j=0; j<n-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main(){
    
    int n;
    cout<<"Enter the size of Array:- "<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter the Element of Array:- "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    bubbleSort(arr, n-1);
    printArray(arr, n-1);
}