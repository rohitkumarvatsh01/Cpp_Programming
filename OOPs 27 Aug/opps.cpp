#include<iostream>
using namespace std;

class Hero{

    public:
    int a=2;
    int b=4;
};


int main(){

    Hero h1;

    cout<<sizeof(h1)<<endl;
    

    cout<<"a:- "<<h1.a<<endl;
    cout<<"b:- "<<h1.b<<endl;

    return 0;
}