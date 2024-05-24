#include<iostream>
using namespace std;

int factorial(int n){
    //base case
    if(n==0){
       return 1;
    }
    return n*factorial(n-1);
}
int main(){
    int n;
    cout<<"Enter the value:-"<<endl;
    cin>>n;
    int ans=factorial(n);

    cout<<"The factorial value of n:- "<<ans<<endl;
    return 0;
}