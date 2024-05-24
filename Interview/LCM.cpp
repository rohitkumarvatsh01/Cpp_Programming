//2. Write a program to find LCM of given array elements.
#include<iostream>
using namespace std;

//Function of GCD
int gcd(int a, int b){
    if(b==0){
        return a;
    }
    return gcd(b, a%b);
}

//Function of LCM
int lcm(int arr[], int n){
    
    int ans=arr[0];
    
    for(int i=1; i<n; i++){
        ans=((arr[i] * ans)/(gcd(arr[i], ans)));
    }
    return ans;
}

int main(){
    int arr[5]={2, 4, 6, 8};
    
    cout<<"The LCM of the Array is:- "<<lcm(arr, 4)<<endl;
}