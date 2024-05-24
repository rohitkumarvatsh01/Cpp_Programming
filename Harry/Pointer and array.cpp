#include<iostream>
using namespace std;
int main(){

    int arr[]={100, 200, 300, 400, 500};
    int *ptr=arr;

    cout<<*(ptr)<<endl;
    cout<<*(ptr+1)<<endl;
    cout<<*(ptr+2)<<endl;
    cout<<*(ptr+3)<<endl;
    cout<<*(ptr+4)<<endl;
    
    return 0;
}