#include<iostream>
using namespace std;

class Student{

    private:
    string name;
    int hight;
    int age;
    
    public:
    int getAge(){
        return this->age;
    }
};

int main(){

    Student first;

    cout<<"The Encapsulation "<<endl;
    
    return 0;
}