#include<iostream>
using namespace std;

void swap(int arr[],int i,int j){
    int temp;
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
/*void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}*/

void sort012(int arr[], int n){
    int low=0;
    int mid=0;
    int high=n-1;

    while(low<=high){
        if(arr[low]==0){
            swap(arr,low,mid);
            low++;
            mid++;
        }
        else if(arr[low]==1){
            low++;
        }
        else {
            swap(arr,low,high);
            high--;
        }
    }
}
int main(){
    
    int arr[5]={2,1,0,2,0};
    int n=5;

    sort012(arr, 5);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}