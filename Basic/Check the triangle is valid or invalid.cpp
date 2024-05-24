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

    int c;
    cout<<"Enter the value of c:- "<<endl;
    cin>>c;



    if(a+b>c){
        cout<<"invalid"<<endl;
    }
    else if(b+c>a){
        cout<<"Invalid"<<endl;
    }
    else if(c+a>b){
        cout<<"Invaild"<<endl;
    }
    else{
        cout<<"Valid"<<endl;
    }
    


    return 0;
}