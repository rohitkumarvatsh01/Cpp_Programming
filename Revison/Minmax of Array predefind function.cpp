#include<iostream>
using namespace std;

int getMin(int arr[], int n){
    int mini;
    for(int i=0; i<n; i++){
        mini=min(mini, arr[i]);
    }
    return mini;
}

int getMax(int arr[], int n){
    int maxi;
    for(int i=0; i<n; i++){
        maxi=max(maxi,arr[i]);
    }
    return maxi;
}

int main(){
    
    int n;
    cout<<"Enter the size of Array:- "<<endl;
    cin>>n;

    int arr[100];
    cout<<"Enter the element of Array:- "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"The Minimum value of the Array:- "<<getMin(arr, n)<<endl;
    cout<<"The Maximum value of the Array:- "<<getMax(arr, n)<<endl;

return 0;
}