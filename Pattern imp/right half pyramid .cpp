//  1 2 3 4
//1 * * * *
//2   * * *
//3     * *
//4       *

#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    for(int i=n; i>=1; i--){
        for(int j=1; j<=n-i; j++){
            cout<<" "<<" ";
        }

        for(int k=1; k<=i; k++){
            cout<<"*"<<" ";
        }

        cout<<endl;
    }
    return 0;
}