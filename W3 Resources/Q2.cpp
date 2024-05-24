// 2. Write a C++ program to find the largest three elements in an array.

#include<iostream>
#include<vector>

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

int threeElement(int arr[], int n){
    int ans;
    for(int i=n-1; i>=3; i--){
        ans=arr[i];
    }

    return ans;
}

int main(){

    int n;
    cout<<"Enter the size of Array:- "<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter the Element in the Array:- "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }   
    
    cout<<"The Sort Array by using selecion sort:- "<<selectionSort(arr, n)<<endl;
    cout<<"The Three Largest element in array:- "<<threeElement(arr, n)<<endl;

    return 0;
}