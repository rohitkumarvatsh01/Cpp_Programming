#include<iostream>
using namespace std;

void tripletSum(int arr[], int n){

    bool found=false;

    for(int i=0; i<n-2; i++){
        for(int j=i+1; j<n-1; j++){
            for(int k=j+1; k<n; k++){
                if(arr[i]+arr[j]+arr[k]==0){
                    found = true;
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
                }
            }
        }
    }

    if(found==false){
        cout<<"The Triplate sum is not Present"<<endl;
    }
}


int main()
{
    int arr[5]={0, -1, 2, -3, 1};
    int n=5;
    tripletSum(arr, n);
    return 0;
}