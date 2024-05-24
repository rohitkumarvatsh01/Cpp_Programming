#include<iostream>
using namespace std;

void swapReferenceVar(int &a, int &b){
    int temp=a;
    a=b;
    b=temp;
}

int main()
{
    int x=4;
    int y=5;
    cout<<x<<y;

    return 0;
}