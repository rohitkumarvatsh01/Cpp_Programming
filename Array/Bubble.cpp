#include<iostream>
using namespace std;

int swapping(int arr[], int n){
    for(int i=1; i<n; i++){
        for(int j=0; j<n-i; j++){
            if(arr[j]>arr[j+1]){
                // int temp;
                // temp=arr[j];
                // arr[j]=arr[j+1];
                // arr[j+1]=temp;
                swap(arr[j],arr[j+1]);
            }
        }
    }
    //return swapping;
}

int main()
{
    int arr[5]={1,4,3,2,5};
    cout<<"The Bubble sort of array is :- "<<swapping<<endl;


    return 0;
}