// 0
// 1 2 
// 3 4 5
// 6 7 8 9



#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;

    int count=0;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }

    return 0;
}