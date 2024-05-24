#include<iostream>
#include<stack>
using namespace std;

int main(){
    
    stack<int>s;

    //Push Operation (creation)
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    //Pop operation (Remove)
    s.pop();
    cout<<"Printing top Element:- "<<s.top()<<endl;

    if(s.empty()){
        cout<<"Stack is Empty"<<endl;
    }
    else{
        cout<<"Stack is not Empty"<<endl;
    }

    return 0;
}