#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key){
    int start=0;
    int mid;
    int end=n-1;

    while(start<=end){
        mid=(start+end)/2;
        if(arr[mid]==key){
            return 1;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}

int main(){

    int evenArray[6]={1,2,3,4,5,6};
    int oddArray[7]={1,2,3,4,5,6,7};
    int even=binarySearch(evenArray, 6, 5);
    int odd=binarySearch(oddArray, 7, 8);
    
    cout<<"The element is found or not:- "<<even<<endl;
    cout<<"The element is found or not:- "<<odd<<endl;

return 0;
}