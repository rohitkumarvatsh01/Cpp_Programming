#include<iostream>
using namespace std;

int main(){
    
    int count=0;
    int arr[7]={'g', 'g', 'b', 'b', 'g', 'y', 'y'};

    int n=7;
    for(int i=0; i<0; i++){
        for(int j=i+1; j<n-1; j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
    }

    if(count%2==0){
        cout<<"All are Even"<<endl;
    }
    else{
        cout<<"Odd"<<endl;
    }
    return 0;
}