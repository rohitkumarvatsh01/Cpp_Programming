#include<iostream>
using namespace std;

int division(int a, int b){
    int c=a/b;
    return c;
}

int main()
{
    int a;
    int b;
    cout<<"Enter the value of a:- "<<endl;
    cin>>a;
    cout<<"Enter the value of b:- "<<endl;
    cin>>b;
    cout<<"The division of a and b:- "<<division<<endl;

    return 0;
}