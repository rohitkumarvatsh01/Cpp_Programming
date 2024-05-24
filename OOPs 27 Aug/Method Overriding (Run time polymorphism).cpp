#include<iostream>
using namespace std;

class Animals{

    public:
    void speak(){
        cout<<"Im Speaking"<<endl;
    }
};

class Dog : public Animals{

    public:
    void bark(){
        cout<<"Im Barking"<<endl;
    }
};

int main(){

    Dog object;
    object.speak();
    object.bark();

    return 0;
}