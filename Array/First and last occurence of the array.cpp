#include<iostream>
using namespace std;

int firstOccu(int arr[], int n, int key){
    int ans=-1;
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            end=mid-1;
        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        else if(key<arr[mid]){
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return ans;
}

int lastOccu(int arr[], int n, int key){
    int start=0;
    int end=n-1;
    int ans=-1;
    int mid=(start+end)/2;

    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            start=mid+1;
        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        else if(key<arr[mid]){
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return ans;
}

int main()
{
    int even[16]={1,2,3,3,3,3,3,3,3,3,3,3,3,3,3,5};
    cout<<"The First Occurence of 4 is at index is : "<<firstOccu(even, 16, 3)<<endl;
    cout<<"The Last Occurence of 4 is at index is : "<<lastOccu(even, 16, 3)<<endl;;

    return 0;
}