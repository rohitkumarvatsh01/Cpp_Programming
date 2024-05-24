#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int>ans;

    int arr[5]={1,2,0,1,0};

    for(int i=0; i<5; i++){
        if(arr[i]==0){
            ans.push_back(arr[i]);
        }
    }

    for(int i=0; i<5; i++){
        if(arr[i]==1){
            ans.push_back(arr[i]);
        }
    }

    for(int i=0; i<5; i++){
        if(arr[i]==2){
            ans.push_back(arr[i]);
        }
    }
    
    cout<<"The sorted value are:- ";
    
    for(auto i=ans.begin(); i!=ans.end(); i++){
        cout<<*i;
    }


}