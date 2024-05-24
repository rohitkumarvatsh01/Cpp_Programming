#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int number[5];
    cout<<number[0]<<endl;
    cout<<number[1]<<endl;
    
    int secondArray[3]={1,2,3};
    cout<<"Index of 2 :- "<<secondArray[2]<<endl;
    cout<<"Index of 1 :- "<<secondArray[1]<<endl;
    cout<<"Index of 0 :- "<<secondArray[0]<<endl;

    int thirdArray[15]={2, 7};
    printArray(thirdArray, 15);
    // int n=15;
    // for(int i=0; i<n; i++){
    //     cout<<thirdArray[i]<<" ";
    // }
    cout<<endl;
    int fouthArray[2]={1,2};
    cout<<"index "<<fouthArray[31];
    
    cout<<endl;
    cout<<endl;

    int fifthArray[10]={0};
    printArray(fifthArray, 10);

    int fifthSize=sizeof(fifthArray)/sizeof(int);
    cout<<fifthSize<<endl;

cout<<endl;
cout<<endl;
    int fifth[12]={1};
    printArray(fifth,12);

    return 0;
}
