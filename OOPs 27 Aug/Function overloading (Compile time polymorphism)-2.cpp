#include<iostream>
using namespace std;

//class FunctionOverloading{

    //public:
    int add(int num1, int num2){
        return num1 + num2;
    }

    int add(int num1, int num2, int num3){
        return num1 + num2 + num3;
    }
//};

int main(){

    
    cout<<"The sum of num1 and num2 are:- "<<add(10, 20)<<endl;

    cout<<"The sum of num1, num2 and num3:- "<<add(10, 20, 30)<<endl;

    return 0;
}