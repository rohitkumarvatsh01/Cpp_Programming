#include<iostream>
using namespace std;

void sortArray(int arr[], int n){
        for(int i=0; i<n-1; i++){
            int minIndex=i;
            for(int j=i+1; j<n; j++){
                if(arr[j]<arr[minIndex]){
                    minIndex=j;
                }
            }
            swap(arr[minIndex], arr[i]);
        }
    }
    
    bool check(int arr1[], int arr2[], int n, int m) {
        
        sortArray(arr1, n);
        sortArray(arr2, m);
        
        if(n != m){
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

    if(check(arr1, arr2, n, m)){
        cout<<"Yes, The both array is same"<<endl;
    }
    else{
        cout<<"No, The both array is not same"<<endl;
    }

return 0;
}