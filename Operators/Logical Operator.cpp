#include<iostream>
using namespace std;
int main()
{
    int a = 5;
    int b = 10;
    int c = 15;
    
    //Logical AND
    cout<<"Logical AND :- "<<((a>0)&&(b!=0)&&(c<=15))<<endl;
    // agr 2 or 3 condition true ho gya to true print ho jayega yani 1
    
    //Logical OR
    cout<<"Logical OR :- "<<((a>0)||(b<10)||(c>=15))<<endl;
    // agr 2 or 3 condition true ho gya to true print ho jayega yani 1
    
    //Logical NOT
    cout<<"Logical NOT :-"<<(!a)<<endl;
    cout<<"Logical NOT :-" <<(!b)<<endl;
    int d=0;
    cout<<"Logical NOT :-"<<(!d)<<endl;
    // ye true ka flase or false ka true kr deta hai 
    // zero ko non zero or none zero ko zero
    


    return 0;
}