#include<iostream>
using namespace std;

void selectionSort(int arr[], int n){
    for(int i=1; i<n; i++){
        int minIndex=i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}

void printElement(int arr[], int n){
    cout<<"The Sorted Array:-"<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[5]={1,3,5,2,4};
    int n=5;
    
    printElement(arr, n-1);
    selectionSort(arr, n-1);
    return 0;
}