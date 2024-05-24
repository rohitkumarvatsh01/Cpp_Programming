#include<iostream>
using namespace std;

void selectionSort(int arr[], int n){

    for(int i=0; i<n-1; i++){
        int minIndex=i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int n;
    cout<<"Enter the size of n:- "<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter the Element of Array:- "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    selectionSort(arr, n-1);
    printArray(arr, n-1);

    return 0;
}