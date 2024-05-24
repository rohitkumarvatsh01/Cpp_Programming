#include<iostream>
using namespace std;

int main()
{
    int a;
    int b;
    cin>>a;
    cin>>b;

    int temp;
    temp=a;
    a=b;
    b=temp;

    cout<<"The swap value of a and b:- "<<a<<" "<<b<<endl;

    return 0;
}