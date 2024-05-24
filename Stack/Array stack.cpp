#include<iostream>
#include<stack>
using namespace std;

class Stack{

    //Property
    public:
    int *arr;
    int top;
    int size;

    //Behaviour
    Stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }
    
    void push(int element){
        if(size-top>1){
            top++;
            arr[top]=element;
        }
        else{
            cout<<"Stack Overflow"<<endl;
        }
    }

    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"Stack underflow"<<endl;
        }
    }

    int peek(){
        if(top>=0){
            return arr[top];
        }
        else{
            cout<<"Stack is empty"<<endl;
        }
    }

    
    bool empty(){
        if(top==-1)
            return true;
            
            else
                return false;
        
    }
    
};

int main(){

    Stack s(10);

    s.push(0);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);
    s.push(8);
    s.push(9);

    cout<<s.peek()<<endl;
    s.pop();

    cout<<s.peek()<<endl;
    s.pop();

    cout<<s.peek()<<endl;
    s.pop();

    cout<<s.peek()<<endl;
    s.pop();

    cout<<s.peek()<<endl;
    s.pop();

    cout<<s.peek()<<endl;
    s.pop();

    cout<<s.peek()<<endl;
    s.pop();
    
    if(s.empty()){
        cout<<"Stack is Empty"<<endl;
    }
    else{
        cout<<"Stack is not Empty"<<endl;
    }
    
}