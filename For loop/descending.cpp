#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={4,6,8,9,2,3,5,7,0,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr+n, greater<int>());
    cout<<"The array sort in descending order"<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}