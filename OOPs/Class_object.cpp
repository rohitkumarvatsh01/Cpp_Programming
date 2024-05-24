#include<iostream>
using namespace std;

class Box{
    
    public:
    int width;
    int height;
    int depth;

};



int main(){
    Box obj;
    obj.width=10;
    obj.height=10;
    obj.depth=10;

    int volume = obj.width * obj.height * obj.depth;

    cout<<"The volume of Box:- "<<volume<<endl;
}