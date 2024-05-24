#include<iostream>
using namespace std;

int avg(int num1, int num2, int num3){
    int total=(num1+num2+num3)/3;
    return total;
}

int main()
{
    int a;
    int b;
    int c;
    cin>>a>>b>>c;
    cout<<avg(a,b,c)<<endl;

    return 0;
}