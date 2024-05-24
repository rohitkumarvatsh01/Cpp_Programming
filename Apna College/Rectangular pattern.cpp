#include<iostream>
using namespace std;
int main(){
    int row;
    int col;
    cout<<"Enter the value of row:- ";
    cin>>row;
    cout<<"Enter the value of col:- ";
    cin>>col;
    

    
    for(int i=1; i<=row; i++)
    {
        for(int j=1; j<=col; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }


    
    return 0;
}