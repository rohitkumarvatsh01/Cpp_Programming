#include<iostream>
using namespace std;

int main()
{
    int arr[50], num, temp, i, j;
    cout<<"Enter the array:- "<<endl;
    cin>>num;

    for(int i=0; i<num; i++){
        cout<<"Enter the element"<<i+1<<" ";
        cin>>arr[i];
    }
    for(int i=0; j=num/2; i++,j--){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    cout<<"Reverse all element of the array"<<endl;
    for(int i=0; i<num; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}