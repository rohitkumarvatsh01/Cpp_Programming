#include<iostream>
using namespace std;

void reverse(char name[], int n){
    int start=0;
    int end=n-1;
    while(start<end){
        swap(name[start++], name[end--]);
    }
}

int main()
{
    char name[20];
    cout<<"Enter the your name:- "<<endl;
    cin>>name;

    cout<<"Your name is "<<name<<endl;
    cout<<"your name revrse: "<<reverse;
    return 0;
}