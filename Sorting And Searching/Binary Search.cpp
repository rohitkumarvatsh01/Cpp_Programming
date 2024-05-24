#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key){
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;

    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }

        if(arr[mid]<key){
            mid=start++;
        }
        else{
            end--;
        }
        mid=(start+end)/2;
    }
    return -1;
}

int main(){
    
    int evenArray[6]={1,2,3,4,5,6};
    int oddArray[5]={1,2,3,4,5};
    
    cout<<"element found or not:- "<<binarySearch(evenArray, 6, 6)<<endl;
    cout<<"element found or not:- "<<binarySearch(oddArray, 5, 6)<<endl;
return 0;
}