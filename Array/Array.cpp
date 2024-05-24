#include<iostream>
using namespace std;

int main()
{ 
    int number=[14];
    cout<<"value of 14 index"<<number<<endl;

    int second[3]={5,7,12};
    cout<<"value of 2nd index"<<second<<endl;

    int third[15]={2,7};
    int n=15;
    cout<<"The printing the array"<<endl;
    for(int i=0; i<n; i++){
        cout<<third[i];
    }

    return 0;
}