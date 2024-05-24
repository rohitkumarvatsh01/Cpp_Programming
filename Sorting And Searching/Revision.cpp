#include<iostream>
#include<stack>
using namespace std;

int main(){

   stack<int>s;

   s.push(1);
   s.push(2);
   s.push(3);
   s.push(4);
   s.push(5);

   cout<<"The top of the stack:- "<<s.top()<<endl;
   s.pop();

   s.pop();
   cout<<"The peek of the stack:- "<<s.top()<<endl;

   cout<<"The Size of the stack:- "<<s.size()<<endl;

   if(s.empty()){
    cout<<"The stack is empty:";
   }
   else{
    cout<<"Stack is not empty:";
   }

    return 0;
}