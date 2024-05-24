#include<iostream>
using namespace std;

int smallElement(int arr[], int n){
    int small=arr[0];
    for(int i=0; i<n; i++){
        if(small>arr[i]){
            small=arr[i];
        }
    }
    return small;
}

int main(){
    int arr[5]={5,4,3,2,1};
    int n=5;
    cout<<"The Smallest element in the array:- "<<smallElement(arr, n)<<endl;
    return 0;
}