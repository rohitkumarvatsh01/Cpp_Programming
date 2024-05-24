#include<iostream>
using namespace std;

int getMin(int arr[], int n){
    int min;
    for(int i=0; i<n; i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}

int getMax(int arr[], int n){
    int max;
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

int main(){

    int n;
    cout<<"Enter the size of Array:- "<<endl;
    cin>>n;

    int arr[100];
    cout<<"Enter the Element of Array:- "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"The Minimum number is:- "<<getMin(arr, n)<<endl;
    cout<<"The Maximum number is:- "<<getMax(arr, n)<<endl;
    
    return 0;
}