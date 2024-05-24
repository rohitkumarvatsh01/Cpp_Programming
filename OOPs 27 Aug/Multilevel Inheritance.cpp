#include<iostream>
using namespace std;

class Animal{
    
    public:
    int age;
    int weight;
    int height;

    public:
    void speak(){
        cout<<"Speaking "<<endl;
    }
};

class Dog : public Animal{
    
};

class Tommy : public Dog{

};


int main(){

    Tommy t;
    t.speak();
}