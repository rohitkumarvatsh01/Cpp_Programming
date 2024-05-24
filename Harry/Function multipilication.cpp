#include<iostream>
using namespace std;

int mul(int a, int b){
    int c=a*b;
    return c;
}

int main()
{
    int a;
    int b;
    cin>>a;
    cin>>b;
    cout<<mul(a,b)<<endl;

    return 0;
}