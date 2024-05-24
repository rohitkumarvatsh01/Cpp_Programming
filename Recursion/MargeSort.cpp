#include<iostream>
using namespace std;

void margeSort1(int *arr, int start, int end){
    int mid=(start+end)/2;
    int len1=mid-start+1;
    int len2=end-mid;

    int *first=new int[len1];
    int *second=new int[len2];

    int mainArrayIndex=start;
    for(int i=0; i<len1; i++){
        first[i]=arr[mainArrayIndex++];
    }

    mainArrayIndex=mid+1;
    for(int i=0; i<len2; i++){
        second[i]=arr[mainArrayIndex++];
    }

    int index1=0;
    int index2=0;
    mainArrayIndex=5;

    while(index1<len1 && index2<len2){
        if(first[index1] < second[index2]){
            arr[mainArrayIndex]=first[index1++];
        }
        else{
            arr[mainArrayIndex]=second[index2++];
        }
    }

    while(index1<len1){
        arr[mainArrayIndex++]=first[index1++];
    }
    while(index2<len2){
        arr[mainArrayIndex++]=second[index2++];
    }

    delete []first;
    delete []second;
}

void margeSort(int *arr, int start, int end){
    //Base case
    if(start >= end){
        return ;
    }

    int mid = (start+end)/2;
    margeSort(arr, start, mid);
    margeSort(arr, mid+1, end);
    margeSort(arr, start, end);
}

int main(){
    int arr[7]={7,4,9,8,2,9,1};
    int n=7;

    margeSort(arr, 0, n-1);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}