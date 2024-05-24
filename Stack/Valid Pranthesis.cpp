#include<iostream>
#include<vector>
using namespace std;

int smallElement(int arr[], int n){
    vector<int>ans;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]>arr[j]){
                ans.push_back(arr[j]);
            }
            else{
                ans.push_back(-1);
            }
        }
    }
    return ans;
}

int main(){
    int arr[4]={2,1,4,3};
    int n=4;
    vector<int>v;
    //v.push_back(smallElement);
    int ans= smallElement(arr, 5);
    for(int i=0; i<n; i++){
        cout<<ans<<" ";
    }
    cout<<endl;
    return 0;
}