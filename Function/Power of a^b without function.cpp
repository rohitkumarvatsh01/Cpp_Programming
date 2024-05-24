//simple power program me 46 line ho gya hai
// agr bug kahi ho jaye to dunde mw time lagega like 1000 lines code
//buggy
//Bulky
//Unreadable

// then we use function
#include<iostream>
using namespace std;
int main()
{
   int a,b;
   cin>>a>>b;
   int ans=1;
   for(int i=1; i<=b; i++){
       ans=ans*a;
   }
   cout<<"Answer is:- "<<ans<<endl;

   int c,d;
   cin>>c>>d;
   ans=1;
   for(int i=1; i<=d; i++){
       ans=ans*c;
   }
   cout<<"Answer is:-"<<ans<<endl;

   int e,f;
   cin>>e>>f;
   ans=1;
   for(int i=1; i<=f; i++){
       ans=ans*e;
   }
   cout<<"Answer is:- "<<ans<<endl;

    
    int g,h;
    cin>>g>>h;
    ans=1;
    for(int i=1; i<=h; i++){
        ans = ans * g;
    }
    cout<<"The answer is:- "<<ans<<endl;

    int i, j;
    cin>>i>>j;
    ans=1;
    for(int i=1; i<=j; i++){
        ans = ans * i;
    }
    cout<<"The answer is:- "<<ans<<endl;
    return 0;
} 
