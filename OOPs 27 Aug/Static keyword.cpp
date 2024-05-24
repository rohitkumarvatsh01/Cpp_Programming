#include<iostream>
using namespace std;

class Hero{
    public:
    int health;
    char level;

    static int timeToComplete;
};

int Hero :: timeToComplete = 100;

int main(){

    cout<<"Time to complete :"<<Hero :: timeToComplete <<endl;
    
    //Static keyword me object ki8 need nhi hoti haii ye hm direct access kr skte haii
    //16 line tk tk hi static keyword haii
    //22 line ke baad static keyword ko hm object bana ke call kr rhe haii

    Hero a;
    cout<<"Time to complete :"<<a.timeToComplete<<endl;

    Hero b;
    b.timeToComplete=200;
    cout<<"Time to complete :"<<a.timeToComplete<<endl;
    cout<<"Time to complete :"<<b.timeToComplete<<endl;

return 0;
}