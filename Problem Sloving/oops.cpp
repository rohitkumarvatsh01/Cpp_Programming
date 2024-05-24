#include<iostream>
using namespace std;

class Employee{
    public:
    string name;
    int age;
    int salary;
};


int main(){

    Employee id;
    id.name="Rohit";
    id.age=12;
    id.salary=1000;

    cout<<id.name<<endl;

    return 0;
}