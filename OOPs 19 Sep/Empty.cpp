#include<iostream>
using namespace std;

class Class{
    //Empty class hoga to uska track rakhne ke liye 1bytes size de degaa;;;
};

int main(){
    
    Class object;

    cout<<"The size of the empty class is:- "<<sizeof(object)<<endl;

return 0;
}