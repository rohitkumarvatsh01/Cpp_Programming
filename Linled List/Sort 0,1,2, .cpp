#include<iostream>
using namespace std;

int sort012(int arr[], int n){
    int zeroCount=0;
    int oneCount=0;
    int twoCount=0;

    for(int i=0; i<n; i++){
        if(arr[i]==0){
            zeroCount++;
        }
        else if(arr[i]==1){
            oneCount++;
        }
        else
        {
            twoCount++;
        }
        
    }
    for(int k=0; k<n; k++){
        zeroCount--; b
    }
    
}

int main(){
    int arr[8]={1,1,0,0,0,0,1,0};
    sort012(arr,8);
    //printArray(arr,8);
return 0;
}