#include<iostream>
#include<array>
using namespace std;

int main()
{
    array<int,4>a;
    a={1,2,3,4};
    int size=a.size();
    for(int i=0; i<size; i++){
        cout<<a[i]<<endl;
    }
    // yaha pr 2nd index wala element print hoga 3
    //cout<<"Element at 2nd Index:- "<<a.at(2)<<endl;
    
    //yaha pr check hoga kya array empty hai ya nahi
    //cout<<"Empty or Not:- "<<a.empty()<<endl;
    
    //first element of array
    cout<<"First element:- "<<a.front()<<endl;
    
    //last element of array
    cout<<"Last Element:- "<<a.back()<<endl;


    return 0;
}