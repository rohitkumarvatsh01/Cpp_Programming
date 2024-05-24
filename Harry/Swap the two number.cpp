#include<iostream>
using namespace std;

int main()
{
    int a=2;
    int b=3;
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"The swap of two number:- "<<a <<" "<< b;


    return 0;
}