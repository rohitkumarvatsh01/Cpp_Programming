#include<iostream>
using namespace std;

void moveNegative(int arr[], int n){

    for(int i=0; i<n-1; i++)
    {
        int minIndex=i;
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]<arr[minIndex])
            {
                minIndex=j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}

int printArray(int arr[], int n){
    cout<<"The array sort is:- "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cout<<"Enter the value of n:- "<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter the element of array:- "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    moveNegative(arr, n);
    printArray(arr, n);
    return 0;
}