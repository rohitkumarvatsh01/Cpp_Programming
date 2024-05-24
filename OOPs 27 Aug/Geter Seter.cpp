#include<iostream>
using namespace std;

class Hero{

    private:
    int health;

    public:
    char level;

    void print(){
        cout<<level<<endl;
    }
    
    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health=h;
    }

    void setLevel(char ch){
        level=ch;
    }

};

int main(){
    
    Hero ramesh;
    cout<<"Ramesh is Health: "<<ramesh.getHealth()<<endl;

    ramesh.setHealth(70);
    ramesh.level='A';

    cout<<"Ramnesh is Health: "<<ramesh.getHealth()<<endl;
    cout<<"Ramesh is Level: "<<ramesh.level<<endl;
return 0;
}