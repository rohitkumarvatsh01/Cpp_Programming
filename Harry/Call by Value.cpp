#include<iostream>
using namespace std;

void swap(int a, int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}

int main()
{
    int a;
    int b;
    cin>>a;
    cin>>b;
    cout<<"a="<<a<<" "<<"b="<<b<<endl;
    cout<<"a="<<a<<" "<<"b="<<b<<endl;

    return 0;
}