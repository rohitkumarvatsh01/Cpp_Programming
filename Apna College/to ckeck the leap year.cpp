#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the year:- ";
    cin>>n;
    if(n%4==0){
        cout<<"This year is leap year";

    }
    else{
        cout<<"This year is not leap year";
    }

    return 0;
}
