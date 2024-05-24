#include<iostream>
#include<stack>
using namespace std;

void removeMiddle(stack<int>&arr, int count, int size){

    stack<int>s;

    //Base case
    if(count==size/2){
        arr.pop();
        return ;
    }

    //Processing
    int num=arr.top();
    arr.pop();

    //Recursive Call
    removeMiddle(arr, count+1, size);
    arr.push(num);
}

int main(){

    int arr[5]={1,2,3,4,5};
    int size=5;
    int count=0;

    removeMiddle(arr, count, size);
    

return 0;
}