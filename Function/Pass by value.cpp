#include<iostream>
using namespace std;

void dumny(int n){
    n++;
    cout<<"n is "<<n<<endl;
}

int main()
{
    int n; 
    cin>>n;
    dumny(n);
    cout<<"number is n "<<n<<endl;
    

    return 0;
}