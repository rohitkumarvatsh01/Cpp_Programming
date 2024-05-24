#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string>q;
    q.push("Rohit");
    q.push("Kumar");
    q.push("Ray");

    cout<<"Size Before pop: "<<q.size()<<endl;
    cout<<"The first element: "<<q.front()<<endl;
    cout<<"Empty or Not: "<<q.empty()<<endl;

    q.pop();
    cout<<"First element: "<<q.front()<<endl;
    cout<<"Size after pop: "<<q.size()<<endl;

}