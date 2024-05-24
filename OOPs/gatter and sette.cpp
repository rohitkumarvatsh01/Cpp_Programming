#include<iostream>
using namespace std;

class Hero{
    private:
    int health;

    private:
    char level;

    void print(){
        cout<<level<<endl;
    }

    int gethealth(){
        return health;
    }
    char getlevel(){
        return level;
    }

    void sethealth(int h){
        health=h;
    }
    void detlevel(char ch){
        level=ch;
    }
};

int main(){
    Hero ramesh;
    cout<<"Ramesh health is:- "<<ramesh.gethealth()<<endl;

    ramesh.setlevel(70);
    ramesh.level'A';

    ramesh.sethealth(70);
    ramesh.level='A';

    cout<<"Health is:- "<<ramesh.gethealth()<<endl;
    cout<<"Level is :-"<<ramesh.level<<endl;

    
    return 0;
}