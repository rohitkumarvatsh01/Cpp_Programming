#include<iostream>
using namespace std;

inline int product(int a, int b){
    return a*b;
}

float moneyRecived(int currentMoney, float factor=1.09){
    return currentMoney*factor;
}

int main()
{
    int a,b;
    int money=10000;
    cout<<money<<moneyRecived(money)<<endl;
    cout<<money<<moneyRecived(money, 1.1)<<endl;

    return 0;
}