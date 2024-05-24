#include<iostream>
using namespace std;

int main()
{
    int a=2;
    int i=3;
    int sum1=a+(i++);
    int sum2=a+(++i);
    int sum3=a+(i--);
    cout<<sum1<<endl;
    cout<<sum2<<endl;
    cout<<sum3<<endl;

    int b=2;

    return 0;
}