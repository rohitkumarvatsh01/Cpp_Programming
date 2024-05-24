#include<iostream>
using namespace std;

int getSum(int arr[], int n){
    int sum=0;
    for(int i=0; i<n; i++){
        sum=sum+arr[i];
    }
    return sum;
}

int main(){
    
    int n;
    cout<<"Enter the size of Array:- "<<endl;
    cin>>n;

    int arr[100];
    cout<<"Enter the element of Array:- "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"The Sum of Array is:- "<<getSum(arr, n)<<endl;

    return 0;
}