#include<iostream>
using namespace std;

class Human{
    
    public:
    int age;
    int height;
    int weight;

    public:
    int getAge(){
        return this->age;
    }
    void setWeight(int w){
        this->weight=w;
    }

};

class Male : public Human{

    public:
    string color;

    void sleep(){
        cout<<"Male Sleeping"<<endl;
    }
    
};

int main(){

    Male object1;

    cout<<"Male age:- "<<object1.age<<endl;
    cout<<"Male weight:- "<<object1.weight<<endl;
    cout<<"Male height:- "<<object1.height<<endl;

    object1.setWeight(20);
    cout<<"Male Update age:- "<<object1.weight<<endl;

    object1.sleep();
    
    cout<<"Sb sahi Chal rha hai"<<endl;


    return 0;
}