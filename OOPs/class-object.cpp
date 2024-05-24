#include<iostream>
using namespace std;

class Square{
    public:
    int side;
};

int main(){

    Square obj;
    obj.side=10;

    int volume = obj.side * obj.side;

    cout<<"The volume of square is:- "<<volume<<endl;

    

    return 0;
}