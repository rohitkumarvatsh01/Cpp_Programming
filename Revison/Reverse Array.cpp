#include<iostream>
using namespace std;

void reverseArray(int arr[], int n){

    int start=0;
    int end=n-1;

    while(start<=end){
        int temp;
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;

        start++;
        end--;
    }
}

int printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int n;
    cout<<"Enter the Size of Array:- "<<endl;
    cin>>n;

    int arr[10];
    cout<<"Enter the element :- "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"The Reverse of the Array:- "<<endl;
    reverseArray(arr, n);
    
    printArray(arr, n);
}