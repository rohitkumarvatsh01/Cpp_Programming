#include<iostream>
using namespace std;

int uniqueValue(int arr[], int n){
    int ans;
    for(int i=0; i<n; i++){
        ans=ans^arr[i];
    }
    return ans;
}

int main(){
    
    int arr[5]={1,2,3,2,1};
    

    uniqueValue(arr, 5);

return 0;
}