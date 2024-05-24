#include<iostream>
using namespace std;

int power(int n){
    //base case kaha rukna hai 
    if(n==0){
        return 1;
    }
    return 2*power(n-1);
}
int main(){
    int n;
    cout<<"Enter the value of n:-";
    cin>>n;
    int ans=power(n);
    cout<<"The Power of n :- "<<ans;
    return 0;
}
