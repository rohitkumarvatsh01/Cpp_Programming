#include<iostream>
#include<vector>
using namespace std;


int countLessGreater(int arr[], int n, int x) {
    
    vector<int>ans;

    int minCount=0;
    int maxCount=0;

    for(int i=0; i<n; i++){
        if(arr[i]<=x){
            minCount++;
        }
    }
    ans.push_back(minCount);

    for(int i=0; i<n; i++){
        if(arr[i]>=x){
            maxCount++;
        }
    }
    ans.push_back(maxCount);

    
    return ans;
}


int main(){

    int n;
    cout<<"Enter the size of the Array:-"<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter the Element of the Array:- "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    int x;
    cout<<"Enter the Value of X:- "<<endl;
    cin>>x;

    int ans=countLessGreater(arr, n, x);

    cout<<ans<<endl;

    return 0;
}