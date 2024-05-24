#include<iostream>
using namespace std;

int factorial(int n){
    //Base case
    if(n==0){
        return 1;
    }
    // int small=factorial(n-1);
    // int big=n*small;
    // return big;

    return n*factorial(n-1);
}

int main(){
    int n;
    cout<<"Enter the value of n:- "<<endl;
    cin>>n;
    int ans;
    ans=factorial(n);
    cout<<"The Value of n factorial is :- "<<endl<<ans<<endl;

return 0;
}