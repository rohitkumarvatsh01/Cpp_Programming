#include<iostream>
using namespace std;

//Print Function
void printArray(int arr[], int start, int end){
    for(int i=start; i<end; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

//Binary Seach Function if present then return true else return false
bool binarySearch(int *arr, int start, int end, int key){

    //Print
    printArray(arr, start, end);
    
    int mid = start+(end-start)/2;

    //Base case
    if(start > end){
        return false;
    }
    if(arr[mid]==key){
        return true;
    }

    //Recursion Call
    if(arr[mid] < key){
        return binarySearch(arr, mid+1, end, key);
    }
    else{
        return binarySearch(arr, start, mid-1, key);
    }
}

//Main function
int main(){
    
    int arr[6]={10, 20, 30, 40, 50, 60};
    int size=6;
    int key=70;
    
    cout<<"The element present or not:- "<<binarySearch(arr, 0, size-1, key)<<endl;

    return 0;
}