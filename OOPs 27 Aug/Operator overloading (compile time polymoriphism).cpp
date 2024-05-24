#include<iostream>
using namespace std;

class A{

    public:
    int a;
    int b;

    public:
    int add(){
        return a+b;
    }

    void operator +(A &obj){
        int value1=this->a;
        int value2=obj.a;
        cout<<"Hello Rohit"<<endl;
    }

    void operator () (){
        cout<<"Main Bracket hu bhai"<<endl;
    }
};

int main(){

    A object1, object2;
    object1.a=2;
    object1.b=4;

    object1+object2;
    object1();
    return 0;
}