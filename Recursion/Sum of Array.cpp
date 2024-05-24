#include<iostream>
using namespace std;

int getSum(int *arr, int size){
    //Base Case
    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }

    //Recursive Call for Remaining part of the array
    int remainingpart=getSum(arr+1, size-1);
    int sum=arr[0]+remainingpart;
    return sum;
}

int main(){
    int size;
    cout<<"Enter the size of Array:- "<<endl;
    cin>>size;

    int arr[size];
    cout<<"Enter the Element of Array:- "<<endl;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    int sum;
    sum=getSum(arr, size);

    cout<<"The sum of the Array is:- "<<sum<<endl;
    
    return 0;
}