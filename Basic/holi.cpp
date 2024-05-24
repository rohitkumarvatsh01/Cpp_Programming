#include<iostream>
using namespace std;

int sortArray(int arr[], int n){
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            int temp;
            temp=arr[j+1];
            arr[j+1]=arr[j];
            arr[j]=temp;
        }
    }
    return sortArray;
}

int main()
{
    int arr[]={1,3,7,4,5,2};
    cout<<"The sort array of :- "<<sortArray<<endl;
    return 0;
}