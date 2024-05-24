#include<iostream>
using namespace std;

class Hero{
    public:
    int health;
    char level;
    int static timeToComplete;

    static int random(){
        return timeToComplete;
    }
};

int Hero :: timeToComplete = 500;

int main(){
    cout<<"Time to complete :"<<Hero::timeToComplete<<endl;
    return 0;
}