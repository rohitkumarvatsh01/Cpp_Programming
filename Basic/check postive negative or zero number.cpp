#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number:- "<<endl;
    cin>>n;

    if(n>0){
        cout<<"The number is the Postive:- "<<n<<endl;
    }
    else if(n<0){
        cout<<"The number is the Negative:- "<<n<<endl;
    }
    else{
        cout<<"The number is the Zero:- "<<n<<endl;
    }


    return 0;
}