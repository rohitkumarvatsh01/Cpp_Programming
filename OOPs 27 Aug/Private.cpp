#include<iostream>
using namespace std;

class Rohit{

    public:
    int health;

    private:
    char level;
    
    void print(){
        cout<<level<<endl;
    }


};

int main(){

    Rohit r;
    cout<<"Size of: "<<r.health<<endl;
    //cout<<"SIze of: "<<r.level<<endl;
    return 0;
}