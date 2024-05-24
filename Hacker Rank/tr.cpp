#include<bits/stdc++.h>
using namespace std;
int main(){
    int a0;
    int a1;
    int a2;
    cin>>a0;
    cin>>a1;
    cin>>a2;
    
    int b0;
    int b1;
    int b2;
    cin>>b0;
    cin>>b1;
    cin>>b2;
    
    int a=0; int b=0;
    if(a0>b0){
        a++;
    }
    else{
        b++;
    }
    if(a1>b1){
        a++;
    }else{
        b++;
    }
    if(a2>b2){
        a++;
    }else{
        b++;
    }

    cout<<a<<" "<<a;
    return 0;
}