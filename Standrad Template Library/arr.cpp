#include<iostream>
#include<array>
using namespace std;

int main(){

    array<int,9>a;
    a={1,2,3,4,5,6,7,8,9};

    int size=a.size();

    for(int i=0; i<size; i++){
        cout<<a[i]<<" "<<endl;
    }

    
    cout<<"The first element is:- "<<a.front()<<endl;
    
    cout<<"The second element is:- "<<a.at(1)<<endl;
    
    cout<<"The last second element is:- "<<a.at(8)<<endl;
    
    cout<<"The last element is :- "<<a.back()<<endl;
    
    cout<<"The array empty or not:- "<<a.empty()<<endl;
    




    return 0;
}