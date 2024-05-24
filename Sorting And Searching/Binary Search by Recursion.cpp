#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key){
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;

    //Base case
    if(n==0){
        return ;
    }
    
    if(arr[mid]==key){
        return mid;
    }

    //Recursive call
    if(arr[mid]<key){
        return binarySearch(arr, start, mid+1);
    }
    else{
        return binarySearch(arr, mid-1, end);
    }
}

int main(){
    int arr[6]={1,2,3,4,5,6};

return 0;
}