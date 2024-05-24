#include<iostream>
using namespace std;

struct employee
{
    int id;
    char favchar;
    float salary;
};


int main()
{
    struct employee Rohit;
    Rohit.id=86;
    Rohit.favchar='R';
    Rohit.salary=120000;

    cout<<"The id of employee:- "<<Rohit.id<<endl;
    cout<<"The favchar of emloyee:- "<<Rohit.favchar<<endl;
    cout<<"The salary of employee:- "<<Rohit.salary<<endl;

    return 0;
}