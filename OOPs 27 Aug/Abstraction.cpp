#include<iostream>
using namespace std;

class Abstraction{
    
    private:
    int a;
    int b;

    public:
    void set(int x, int y){
        a=x;
        b=y;
    }

    void display(){
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
    }
};

int main(){

    Abstraction object;
    object.set(10, 20);
    object.display();
    
    return 0;
}