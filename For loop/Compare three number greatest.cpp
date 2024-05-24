#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    int c;
    cout<<"Enter the value of a:- "<<endl;
    cin>>a;
    cout<<"Enter the value of b:- "<<endl;
    cin>>b;
    cout<<"Enter the value of c:- "<<endl;
    cin>>c;

    //condition apply

    if(a>b){
        if(a>c){
            cout<<"The value of a is greater:- "<<a<<endl;
        }
    }
    else if(b>c){
        if(b>a){
            cout<<"The value of b is greater:- "<<b<<endl;
        }
    }
    
    else{
        cout<<"The value of c is greater:- "<<c<<endl;
    }
    return 0;
}