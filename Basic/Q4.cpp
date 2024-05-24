#include<iostream>
using namespace std;
int main()
{
    char a;
    cin>>a;

    if(a>='A'&&a<='Z')
    {
        cout<<"Upper Case";
    }
    else if(a>='a'&&a<='z')
    {
        cout<<"Lower Case";
    }
    else if(a>='0'&&a<='9')
    {
        cout<<"Digit";
    }


    return 0;
}