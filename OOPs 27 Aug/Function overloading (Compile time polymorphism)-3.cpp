#include<iostream>
using namespace std;

int add(int num1, int num2){
    return num1 + num2;
}

double add(double num1, double num2){
    return num1 + num2;
}

int main(){

    cout<<"The sum of num1 and num2 are:- "<<add(10, 20)<<endl;

    cout<<"The sum of num1, num2 and num3:- "<<add(10.21 , 20.89)<<endl;
    
    return 0;
}