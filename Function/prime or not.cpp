#include<iostream>
using namespace std;

bool isPrime(int n){
    for(int i=0; i<=n; i++){
        if(n%i==0){
            return 0;
        }
        else{
            return 1;
        }
    }
}

int main()
{   
    int n;
    cin>>n;
    if(isPrime(n)){
        cout<<"is a prime number"<<endl;
    }
    else{
        cout<<"is a not prime number"<<endl;
    }
    

    return 0;
}