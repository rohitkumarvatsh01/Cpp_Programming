#include<iostream>
using namespace std;

int sub(int a, int b){
    int c=a-b;
    return c;
}

int main()
{
    int num1;
    int num2;
    cout<<"Enter the value of num1:- "<<endl;
    cin>>num1;
    cout<<"Enter the value of num2:- "<<endl;
    cin>>num2;
    cout<<"The sub of the num1 and num2 :- "<<sub(num1, num2)<<endl;

    return 0;
}