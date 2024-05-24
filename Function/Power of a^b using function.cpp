#include<iostream>
using namespace std;

int power(int num1, int num2){
    int ans =  1;
    for(int i=1; i<=num2; i++){
        ans = ans * num1;
    }
    return ans;
}



int main()
{
    int num1, num2;
    cin>>num1>>num2;
    int ans = power(num1, num2);
    cout<<"The power of num1^num2:- "<<ans<<endl;


    int num3, num4;
    cin>>num3>>num4;
    ans = power(num1, num2);
    cout<<"The power of num3^num4:- "<<ans<<endl;
    return 0;
}