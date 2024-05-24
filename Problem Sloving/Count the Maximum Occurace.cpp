#include<iostream>
using namespace std;

int  maxOcc(int arr[], int n, int k){
    
    int count=0;

    for(int i=0; i<<n; i++){
        if(arr[i]==k){
            count++;
        }
    }
    return count;
}

int main(){
    
    int arr[5]={1,2,3,4,4};
    int n=5;
    int k=4;

    cout<<maxOcc(arr, 5, k);

return 0;
}