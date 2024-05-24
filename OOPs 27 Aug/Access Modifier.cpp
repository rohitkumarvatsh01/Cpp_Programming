#include<iostream>
using namespace std;
class Rohit{

    public:
    int health;
    char level;
};

int main(){

    Rohit r1;
    cout<<r1.health<<endl;
    cout<<r1.level<<endl;
    cout<<"Size of "<<sizeof(r1)<<endl;

return 0;
}