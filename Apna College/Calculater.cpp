#include<iostream>
using namespace std;

int main(){

    int num1;
    int num2;
    int op;

    cout<<"Enter the value of num1:- "<<endl;
    cin>>num1;
    cout<<"Enter the value of num2:- "<<endl;
    cin>>num2;

    cout<<"Enter the operator:- "<<endl;
    cin>>op;

    if(op=='+'){
        cout<<"The sum of the two number:- "<<num1+num2<<endl;
    }
    else if(op=='-'){ 
        cout<<"The sub of the two number:- "<<num1-num2<<endl;
    }
    else if(op=='*'){
        cout<<"The mul of the two number:- "<<num1*num2<<endl;
    }
    else if(op=='/'){
        cout<<"The div of the two number:- "<<num1/num2<<endl;
    }
    else{
    cout<<"Invalid Operator"<<endl;
    }
    return 0;

      
}