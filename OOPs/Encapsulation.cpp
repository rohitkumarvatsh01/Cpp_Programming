#include<iostream>
using namespace std;

class Student{
    private:
    string name;
    int age;
    int height;

    public:
    int getage(){
        return this->age;
    }
};

int main(){

    Student first;
    cout<<"All function run properly"<<endl;
    return 0;
}