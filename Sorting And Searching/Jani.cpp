#include<iostream>
using namespace std;

int partition(int arr[], int lb, int ub){

    int pivot=arr[lb];
    int start=lb;
    int end=ub;

    while (start<end)
    {
        while (arr[start]<=pivot)
        {
            start++;
        }
        while (arr[end]>pivot)
        {
            end--;
        }
        if(start<end){
            swap(arr[start], arr[end]);
        }
    }
    swap(arr[lb], arr[ub]);

    return ub;
    
}

void quickSort(int arr[], int lb, int ub){
    //Base case
    if(lb < ub){
        

    int p=partition(arr, lb, ub);

    //Recursive call
    //Left side
    quickSort(arr, lb, p-1);
    //Right side
    quickSort(arr, p+1, ub);

    }
}

int main(){

    int arr[5]={2,4,1,6,9};
    int n=5;

    quickSort(arr, 0, n-1);

    return 0;
}