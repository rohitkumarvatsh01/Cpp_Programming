#include<iostream>
using namespace std;

class A{

    public:
    void function1(){
        cout<<"Inside the Function 1"<<endl;
    }
};

class B : public A{

    public:
    void function2(){
        cout<<"Inside the Function 2"<<endl;
    }
};

class C : public A{

    public:
    void function3(){
        cout<<"Inside the FUnction 3"<<endl;
    }
};

int main(){

    A object1;
    object1.function1();

    B object2;
    object1.function1();
    object2.function2();

    C object3;
    object3.function1();
    //object3.function2(); esko nhi karega kyu ki child hai ye 
    object3.function3();

    return 0;
}