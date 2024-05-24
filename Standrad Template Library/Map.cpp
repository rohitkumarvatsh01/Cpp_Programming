#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int,string>m;
    m[1]="Rohit";
    m[2]="Singh";
    m[3]="Kumar";

    m.insert({5,"Rahul"});
    cout<<"Before earse "<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"Finding -13: "<<m.count(-13)<<endl;

    cout<<"After erase"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;
    
    auto it=m.find(5);
    for(auto i=it; i!=m.end(); i++){
        cout<<(*i).first<<endl;
    }
    cout<<endl;
}