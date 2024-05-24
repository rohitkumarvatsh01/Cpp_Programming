#include<iostream>
using namespace std;

void findIndex(int arr[], int n){
    for(int i=0; i<n; i++){
        if(arr[i]==i+1)
        cout<<i+1;
    }
}

int main()
{
    int arr[]={15,2,45,12,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<arr,n;
    return 0;
}