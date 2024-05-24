/*
    1 2 3 4
 1  A
 2  B B
 3  C C C
 4  D D D D
*/



#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=1;
   
    while(i<=n){
        int j=1;
        char ch ='A'+i-1;
        while(j<=i){
            cout<<ch<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}