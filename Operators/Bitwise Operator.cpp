#include<iostream>
using namespace std;

int main()
{
    int a;
    int b;

    cout<<"Enter the value of a:- "<<endl;
    cin>>a;
    cout<<"Enter the value of b:- "<<endl;
    //Bitwise AND
    cout<<"The value of "<<a<<" & "<<b <<" is:- "<<(a&b)<<endl;
    //Bitwise OR
    cout<<"The value of "<<a<<" | "<<b <<" is:- "<<(a|b)<<endl;
    //Bitwise NOT
    cout<<"The value of "<<a<<" ~ "<<b <<" is:- "<<(~a)<<endl;
    //Bitwise XOR
    cout<<"The value of "<<a<<" ^ "<<b <<" is:- "<<(a^b)<<endl;

    return 0;
}