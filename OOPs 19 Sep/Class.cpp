#include<iostream>
using namespace std;

class Class{

    public:
    int a=4;
    int b=5;
};

int main(){

    Class object;

    cout<<object.a<<endl;
    cout<<object.b<<endl;

    cout<<sizeof(object)<<endl;
    return 0;
}