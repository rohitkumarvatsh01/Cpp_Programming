#include<iostream>
using namespace std;

void  swappointer(int *a, int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    int a;
    int b;
    cout<<"Enter the value of a:- "<<endl;
    cin>>a;
    cout<<"Enter the value of b:- "<<endl;
    cin>>b;
    swappointer(&a,&b);
    cout<<"a:-"<<a<<" " <<"b:-"<<b<<endl;

    return 0;
}
   