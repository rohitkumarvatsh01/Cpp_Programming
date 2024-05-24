#include<iostream>
using namespace std;

class FunctionOverloading{

    public:
    void sayHello(){
        cout<<"Hello Rohit"<<endl;
    }

    int sayHello(char name){
        cout<<"Hello"<<endl;
        return 1;
    }
};

int main(){

    FunctionOverloading object;
    object.sayHello();
    return 0;
}