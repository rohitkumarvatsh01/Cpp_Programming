#include<iostream>
using namespace std;

class Hero{
    public:
    int health;
    char ch;

    Hero(){
        cout<<"Constructor called"<<endl;
    }

    ~Hero(){
        cout<<"Deconstructor called"<<endl;
    }
};
int main(){

    cout<<"Phle ye call hoga "<<endl;
    
    //Statically
    Hero a;

    cout<<"Sbse baad ye call hoga"<<endl;

    //Dynamically
    Hero *b = new Hero();
    delete b;

    //Deconstructor call automatically static ke liye hota hai pr dynamically ke liye manual call kerna parta hai...
    //delete b;

}