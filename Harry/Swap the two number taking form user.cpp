#include<iostream>
using namespace std;

int main()
{
    int a;
    int b;
    cout<<"Enter the value of a:- "<<endl;
    cin>>a;
    cout<<"Enter the value of b:- "<<endl;
    cin>>b;
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"The swap of the two number a and b:- "<<"a="<<a<<" "<<"b="<<b<<endl;

    return 0;
}