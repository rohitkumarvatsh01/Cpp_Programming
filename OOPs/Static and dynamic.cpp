#include<iostream>
using namespace std;

class Hero{
    private:
    char level;

    public:
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
    void getlevel(char ch){
        level=ch;
    }
};

int main(){
    Hero a;

    //static allocation;;
    a.sethealth(80);
    a.settlevel('B');

    cout<<"Level is:-"<<(*b).level<<endl;
    cout<<"health is:= "<<(*b).gethealth()<<endl;

    //dynamic allocation;;
    Hero *b=new Hero;
    b->setlevel('A');
    b->setlevel(70);

    cout<<"Level is:- "<<(*b).level<<endl;
    cout<<"Health is:- "<<(*b).gethealth<<endl;

    cout<<"Level is:- "<<b->level<<endl;
    cout<<"Health is:- "<<b->gethealth()<<endl;

    return 0;
}