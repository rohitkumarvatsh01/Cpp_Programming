#include<iostream>
using namespace std;

int main()
{
    int a=3;
    
    cout<<a<<endl;

    if(true){
        int b=5;
        cout<<b<<endl;
    }
    //int b=2;
    cout<<b<<endl;
    //yha pe error show hoga kyu ki b sirf if block me kam krega...
    //agr print krna chahte hai to b ko declare krna parega...
    
    return 0;
}