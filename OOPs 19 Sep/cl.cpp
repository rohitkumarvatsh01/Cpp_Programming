#include<iostream>
using namespace std;

class Employee{
    public:
    string name;
    int age;
    int salary;
};

int main(){

    Employee rohit;
    rohit.age=12;
    rohit.name="Rohit";
    rohit.salary=1000;

    Employee rahul;
    rahul.name="Rahul";
    rahul.age=13;
    rahul.salary=1002;

    Employee muskan;
    muskan.name="Muskan";
    muskan.age=14;
    muskan.salary=1003;
    
    cout<<"The name of the Rohit:- "<<rohit.name<<endl;
    cout<<"The Age of the Rohit:- "<<rohit.age<<endl;
    cout<<"The salary of the Rohit:- "<<rohit.salary<<endl;
    cout<<endl;

    cout<<"The name of the Rahul:- "<<rahul.name<<endl;
    cout<<"The Age of the Rahul:- "<<rahul.age<<endl;
    cout<<"The salary of the Rahul:- "<<rahul.salary<<endl;
    cout<<endl;

    cout<<"The name of the muskan:- "<<muskan.name<<endl;
    cout<<"The Age of the Muskan:- "<<muskan.age<<endl;
    cout<<"The salary of the muskan:- "<<muskan.salary<<endl;
    cout<<endl;

}