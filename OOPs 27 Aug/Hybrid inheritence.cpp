#include<iostream>
using namespace std;

class Vehical{

    public:
    Vehical(){
        cout<<"This is Vehicale "<<endl;
    }
};

class Fare{

    public:
    Fare(){
        cout<<"Fare of vehicale "<<endl;
    }
};

class Bus : public Vehical, public Fare{

};

int main(){

    Bus object2;

    return 0;
}