#include<iostream>
using namespace std;

void printArray(int *arr, int size){
    cout<<"Size of Array is "<<size<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

bool linearSearch(int *arr, int size, int key){

    printArray(arr, size);
    //Base case
    if(size==0){
        return false;
    }
    if(size==key){
        return true;
    }

    //Recursive Call
    bool remaningPart=linearSearch(arr+1, size-1, key);
    return remaningPart;
}

int main(){

    int size;
    cout<<"The Size of Array:- "<<endl;
    cin>>size;
    

    int key;
    cout<<"Enter the Key value:- "<<endl;
    cin>>key;

    int arr[size];
    cout<<"Enter the element of Array:- "<<endl;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    cout<<endl;
    cout<<endl;
    
    printArray(arr, size);

    bool ans = linearSearch(arr, size, key);
    if(ans){
        cout<<"Element is found "<<endl;
    }
    else{
        cout<<"Element is not found "<<endl;
    }

return 0;
}