#include<iostream>
using namespace std;

bool search(int arr[], int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i]==key){
            return true;
        }
    }
    return false;
}

int main(){
    
    int key;
    cout<<"Enter the value which are search in array:- "<<endl;
    cin>>key;

    int n;
    cout<<"Enter the size of array:- "<<endl;
    cin>>n;

    int arr[100];
    cout<<"Enter the element of array:- "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    bool found=search(arr, key, n);
    
    if(found){
        cout<<"Key is Present"<<endl;
    }
    else{
        cout<<"Key is Absent"<<endl;
    }
    

return 0;
}