#include<iostream>
using namespace std;

bool isEven(int a){
if(a&1){
    return 0;
}else{
    return 1;
}
}

int main()
{  
    int num1;
    cin>>num1;
    if(isEven(num1)){
        cout<<"even";
    }
    else{
        cout<<"odd";
    }
    return 0;
}