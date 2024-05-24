//1. Write a program to find GCD or HCF of two numbers.

#include<iostream>
using namespace std;

int gcd(int a, int b){
    int ans;
    
    while(ans>0){
        if(a%ans==0 && b%ans==0){
            break;
        }
        ans--;
    }
    return ans;
}

int main(){
    int a=15;
    int b=45;
    
    cout<<"GCD of a and b:- "<<gcd(a,b)<<endl; 
}