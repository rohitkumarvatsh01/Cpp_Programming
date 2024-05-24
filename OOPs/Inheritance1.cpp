#include<iostream>
using namespace std;

class Human{
    public:
    int height;
    int weight;

    private:
    int age;

    public:
    int getage(){
        return this->age;
    }
    int setweight(){
        this->weigth=w;

    }
};

class Male : public Human{
    string color;

    void sleeo(){
        cout<<"Male Sleeping"<<endl;
    }
};
int main(){
    Male m;
    cout<<m.getheaight<<endl;

    return 0;
}