#include<iostream>
using namespace std;


//int product(int a, int b){
    
// inline function is use for the long code reduce in short code
inline int product(int a, int b){
    return a*b;
}

int main(){
    int a,b;
    cin>>a;
    cin>>b;
    cout<<product(a,b);
    return 0;
    
}

