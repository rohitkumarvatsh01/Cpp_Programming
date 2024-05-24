#include<iostream>
using namespace std;

class Animale{
    
    public:
    int age;
    int weight;
    int height;

    public:
    void bark(){
        cout<<"Animal Barking "<<endl;
    }

};

class Human{
    
    public:
    string color;
    
    
    public:
    void speak(){
        cout<<"Human Speaking "<<endl;
    }

};

class Hybrid : public Animale, public Human{

};

int main(){
    
    Hybrid object1;

    object1.bark();
    object1.speak();

    return 0;
}