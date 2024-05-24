#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    cout<<"The sort array in 0 1 2"<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void sort012(int arr[], int n){
    int start=0;
    int end=n-1;
    int mid=0;

    while(mid<=end){
        if(arr[mid]==0){
            swap(arr[start], arr[mid]);
            start++;
            mid++;
        }
        else  if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid], arr[end]);
            end--;
        }
    }
}

int main(){
    int arr[6]={2,1,0,0,1,2};
    int n=6;

    sort012(arr, n);
    printArray(arr, n);
    return 0;
}