#include<iostream>
using namespace std;

int getPivot(int arr[], int n){
    int start=0;
    int end=n-1;
    int mid=start+(end-start);

    while(start<end){
        if(arr[mid]>=arr[0]){
            start=mid+1;
        }
        else{
            end=mid;
        }
        mid=start+(end-start)/2;
    }
    return start;
} 


int main()
{
    int arr[5]={7,9,7,8,1};
    cout<<"The Pivot Element of index is:- "<<getPivot(arr, 5)<<endl;
    return 0;
}