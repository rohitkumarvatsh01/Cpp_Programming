#include<iostream>
using namespace std;

int printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int partition(int arr[], int low, int high){

    int i=low;
    int j=high;
    int pivot=arr[low];

    while(i<j){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<j){
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j;
}

void quickSort(int arr[], int low, int high){
    if(low<high){
        int p=partition(arr, low, high);

        quickSort(arr, low, p-1);
        quickSort(arr, p+1, high);
    }
}

int main(){
    
    int arr[5]={2,4,6,2,8};
    int n=5;

    quickSort(arr, 0, n-1);
    printArray(arr, n);
    return 0;
}