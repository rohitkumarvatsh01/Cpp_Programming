#include<iostream>
#include<vector>
using namespace std;

vector<int>firstLastOccurance(int *arr, int n, int x){
    
    vector<int>v;

    //First Occurance
    for(int i=0; i<n; i++){
        if(arr[i]==x){
            v.push_back(i);
            break;
        }
    }

    //Last Occurance
    for(int i=n-1; i>=0; i--){
        if(arr[i]==x){
            v.push_back(i);
            break;
        }
    }

    //Check the vector empty or not empty
    if(v.size()==0){
        v.push_back(-1);
        v.push_back(-1);
    }
    return v;
}

int main(){

    int arr[7]={1,2,3,3,3,4,5};
    int n=7;
    int x=3;

    vector<int>ans;
    ans=firstLastOccurance(arr, n, x);
    cout<<"first Occurance: "<< ans[0]<<endl<<"Last Occurance: "<< ans[1] <<endl;

    return 0;
}