#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    vector<int>v;
    vector<int>a(5,1);
    vector<int>last(a);
    

    cout<<"Print last: "<<endl;
    for(int i:last){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Capacity "<<v.capacity()<<endl;
    v.push_back(1);

    cout<<"Capacity "<<v.capacity()<<endl;
    v.push_back(2);

    cout<<"Capacity "<<v.capacity()<<endl;
    v.push_back(2);

    cout<<"Capacity "<<v.capacity()<<endl;
    v.push_back(3);
    
    cout<<"Size "<<v.size()<<endl;

    cout<<"Index 2:-"<<v.at(2)<<endl;

    cout<<"Empty or not "<<v.empty() <<endl;

    cout<<"Front "<<v.front()<<endl;

    cout<<"Back "<<v.back()<<endl;

    cout<<"Before pop back "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    v.pop_back();
    cout<<"After pop back "<<endl;
    for(int i:v){
        cout<<i<<endl;
    }
    cout<<endl;

    cout<<"Before Clear "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    v.clear();
    cout<<"after Clear "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    //v.erase();
    for(int i:v){
        cout<<i<<" ";

    }
    cout<<endl;

}