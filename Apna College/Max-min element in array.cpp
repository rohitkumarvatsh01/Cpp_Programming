#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0; i<n; i++){
        cout<<array[i];
    }

    int maxNo = INT_MAX;
    int minNo = INT_MIN;

    for(int i=0; i<n; i++){
        maxNo=max(maxNo, array[i]);
        /*if(MaxNo>array[i]){
            MaxNo=array[i];
        }*/
        
        minNo=min(minNo, array[i]);
        /*if(minNo<array[i]){
            minNo=array[i];
        }*/
    }
    cout<<maxNo<<" "<<minNo<<endl;
    return 0; 
}