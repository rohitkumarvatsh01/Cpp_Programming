#include<iostream>
using namespace std;

//factorial n
// fact(4)-> 4*fact(3)
// fact(4)-> 3*fact(2)
// fact(4)-> 2*fact(1)
// fact(4)->  4*3*2*1
int factorial(int n){
    if(n<=1){
        return 1;
    }
    return n*factorial(n-1);
}

int main()
{
    int a;
    cout<<"Enter the value of a:- ";
    cin>>a;
    cout<<"The factorial of "<<a<<" "<<"is"<<" "<<factorial(a);

    return 0;
}