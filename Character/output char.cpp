#include<iostream>
using namespace std;


int main(){
    char name[20];
    cout<<"Enter Your name:- "<<endl;
    cin>>name;
    
    // jaha null value aa jayega usse phle the hi print hoga
    //null value ke baad print na hoga
    name[2]='\0';
    
    cout<<"Your name is "<<name<<endl;

    return 0;
}