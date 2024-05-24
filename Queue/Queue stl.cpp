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
    
    cout<<"The size element is:- "<<q.size()<<endl;
    
    q.pop();
    cout<<"The front element is:- "<<q.front()<<endl;

    q.pop();
    cout<<"The size element is:- "<<q.size()<<endl;
    cout<<"The front element is:- "<<q.front()<<endl;
    q.pop();
    q.pop();
   
    cout<<"The front element is:- "<<q.front()<<endl;

    if(q.empty()){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }

    return 0;
}