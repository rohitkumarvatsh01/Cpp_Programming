#include<iostream>
using namespace std;

class Hero{
    public:
    int health;
    char level;

    //Default Constructor
    Hero(){
        cout<<"Constructor Called hoga"<<endl;
    }

    //Parameterised Constructor

    Hero(int health){
        this->health=health;
    }
    Hero(int health, char level){
        this->health=health;
        this->level=level;
    }

    void print(){
        cout<<this->health<<endl;
        cout<<this->level<<endl;
    }


};

int main(){

    cout<<endl;

    cout<<"Pahle ye print hoga "<<endl;
    
    // Static call constructor
    Hero ramesh;
    
    cout<<"Ye constructoe ke baad call hoga"<<endl;

    //Dynamically call Constructor
    Hero *h=new Hero();

    cout<<endl;

    Hero temp(20, 'A');

}