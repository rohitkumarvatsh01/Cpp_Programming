#include<iostream>
using namespace std;

class A{

    public:
    void function1(){
        cout<<"I am A"<<endl;
    }
};

class B{

    public:
    void function1(){
        cout<<"I am B"<<endl;
    }
};

class C : public A, public B{

};

int main(){
    
    C object;
    object.A ::function1();
    object.B ::function1();

    return 0;
}