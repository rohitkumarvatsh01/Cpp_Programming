#include<iostream>
using namespace std;

class Game{

    public:
    int health;
    char level;
};

int main(){
    
    Game Rohit;

    Rohit.health=70;
    Rohit.level='A';
    cout<<Rohit.health<<endl;
    cout<<Rohit.level<<endl;

return 0;
}