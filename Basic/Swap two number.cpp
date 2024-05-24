#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter the value of a:- "<<endl;
    cin>>a;
    int b;
    cout<<"Enter the value of b:- "<<endl;
    cin>>b;
    
    // Method 1
    //swap the two number without using third variable
    // a=a^b;
    // b=a^b;
    // a=a^b;
    // cout<<"The swap of the a and b is:- "<<a<<" "<<b;


    //Method 2
    //using the third variable
    // int temp;
    // temp=a;
    // a=b;
    // b=temp;
    // cout<<"The swap of the a and b is:- "<<a<<" "<<b;

    
    return 0;
}