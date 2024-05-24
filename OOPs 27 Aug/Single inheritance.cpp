#include<iostream>
using namespace std;

class Animale{

    public:
    int age;
    int weight;

    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }

};

class Dog : public Animale{

    
};
int main(){
    Dog d;
    d.speak();
    cout<<"Age of dog:- " <<d.age<<endl;
    return 0;
}