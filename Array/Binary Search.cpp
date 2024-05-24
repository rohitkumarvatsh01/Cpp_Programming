#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;

    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return -1;
}

int main()
{
    int even[6]={2,4,6,8,10};
    int evenIndex=binarySearch(even, 6, 8);
    int odd[5]={1,2,3,4,5};
    int oddIndex=binarySearch(odd, 5, 6);

    cout<<"The even index of 8 is :- "<<evenIndex<<endl;
    cout<<"The odd index of 6 is :- "<<oddIndex<<endl;
    return 0;
}