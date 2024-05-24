//    1 2 3 4
// 1  *
// 2  * *
// 3  * * *
// 4  * * * *

#include<iostream>
using namespace std;

int main(){
    
    int n;
    cout<<"Enter the Value of n :- "<<endl;
    cin>>n;

    cout<<"The Output of the Pattern are:- "<<endl;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

return 0;
}