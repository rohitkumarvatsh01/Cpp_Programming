#include<iostream>
using namespace std;

int main(){
    int arr[5]={0,2,1,0,2};
    int n=5;

    int sort0=0;
    int sort1=1;
    int sort2=2;

    for(int i=0; i<n; i++){
        if(arr[i]==0){
            sort0++;
        }
    }
    for(int i=0; i<n; i++){
        if(arr[i]==1){
            sort1++;
        }
    }
    for(int i=0; i<n; i++){
        if(arr[i]==2){
            sort2++;
        }
    }

    cout<<sort0<<sort1<<sort2<<endl;
}
