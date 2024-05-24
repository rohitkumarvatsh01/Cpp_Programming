#include<iostream>
using namespace std;

int sum(int a, int b){
    return (a+b);
}

int sum(int a, int b, int c){
    return(a+b+c);
}

int main(){
    int a=10; 
    int b=20;
    int c=30;
    cout<<"The Sum of the 2 parameters:- "<<sum(a, b)<<endl;
    cout<<"The Sum of the 3 parameters:- "<<sum(a, b, c)<<endl;
   
    return 0;
}