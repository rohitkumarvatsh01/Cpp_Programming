#include<iostream>
#include<algorithm>
using namespace std;


bool checkEqual(int arr1[], int arr2[], int n, int m){
    sort(arr1, arr1+n);
    sort(arr2, arr1+m);

    if(n!=m){
        return false;
    }

    for(int i=0; i<n; i++){
        if(arr1[i]!=arr2[i]){
            return false;
        }
    }
    return true;
}

int main(){
    int arr1[5]={0,1,2,3,4};
    int arr2[5]={4,3,2,1,0};

    int n=5;
    int m=5;

    if(checkEqual(arr1, arr2, n, m)){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }

return 0;
}