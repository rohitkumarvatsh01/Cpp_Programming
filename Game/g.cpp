#include<iostream>
using namespace std;

int main()
{
    int computerValue=10;
    int number;
    cout<<"Enter the value of number:- "<<endl;
    cin>>number;
    //2 + 2 = 4
    int sum=number+number;
    
    //4+10/2=7
    int avg=(sum+computerValue)/2;
    // 7-2=5
    int sub=avg-number;
    //5
    cout<<"The value of game is:- "<<sub;
    return 0;

}