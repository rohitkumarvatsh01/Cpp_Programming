#include<iostream>
using namespace std;
int main()
{
    int a=2;
    int b=4;


bool first = (a==b);
cout<<first<<endl;
// 2==4 -> 0


bool second = (a>b);
cout<<second<<endl;
// 2>4 -> 0

bool third = (a<b);
cout<<third<<endl;
// 2<4 -> 1

bool fourth = (a>=b);
cout<<fourth<<endl;
// 2>=4 -> 0

bool fifth = (a<=b);
cout<<fifth<<endl;
// 2<=4 -> 1

bool sixth = (a!=b);
cout<<sixth<<endl;
// 2!=4 -> 1

    return 0;
}