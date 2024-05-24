#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    q.push(9);
    q.push(10);
    

    cout<<"size of queue:- "<<q.size()<<endl;
    cout<<"Front element of queue:-"<<q.front()<<endl;
    

    cout<<"After pop"<<endl;
    
    q.pop();
    cout<<"size of queue:- "<<q.size()<<endl;
    cout<<"Front element of queue:-"<<q.front()<<endl;

    
    q.pop();
    cout<<"size of queue:- "<<q.size()<<endl;
    cout<<"Front element of queue:-"<<q.front()<<endl;
    
    q.pop();
    cout<<"size of queue:- "<<q.size()<<endl;
    cout<<"Front element of queue:-"<<q.front()<<endl;

    q.pop();
    cout<<"size of queue:- "<<q.size()<<endl;
    cout<<"Front element of queue:-"<<q.front()<<endl;

    

    if (q.empty())
    {
        cout<<"Queue is empty "<<endl;
    }
    else{
        cout<<"Queue is not empty  "<<endl;
    }
    

}