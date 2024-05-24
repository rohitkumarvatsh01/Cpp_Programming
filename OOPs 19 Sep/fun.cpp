#include<iostream>
using namespace std;

int sum(int a, int b){
    return a+b;
}

int sum(int a, int b, int c){
    return a+b+c;
}

int sum(int a, int b, int c, int d){
    return a+b+c+d;
}

int main(){

    int a=1;
    int b=2;
    int c=3;
    int d=4;

    cout<<sum(a, b)<<endl;
    cout<<sum(a, b, c)<<endl;
    cout<<sum(a, b, c, d)<<endl;
    

    return 0;
}