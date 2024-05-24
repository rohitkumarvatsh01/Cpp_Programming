#include<iostream>
using namespace std;

int solveMeFirst(int a, int b){
    int sum;
    sum=a+b;
    return sum;
} 
int main()
{
    int num1;
    int num2;
    int sum;
    cin>>num1;
    cin>>num2;
    sum=solveMeFirst(num1, num2);
    cout<<sum;
    return 0;
}