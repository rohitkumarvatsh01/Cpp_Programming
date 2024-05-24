#include<iostream>
using namespace std;

int partition(int arr, int low, int high){
    int i=low;
    int j=high;

    int pivot=arr[low];

    while(i<j){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]){
            j++;
        }
        if(i<j){
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[high]);
    return j;
}


void quickSort(int arr[], int low, int high){
    if(low<high){
        int pivot=partition(arr, low, high);

        quickSort(arr, low, pivot-1);
        quickSort(arr, pivot+1, high);
    }
}
int main(){
    int arr[5]={2,4,6,1,3};
    int n=5;

    quickSort(arr, 0, n-1);
    return 0;
}