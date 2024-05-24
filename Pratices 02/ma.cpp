#include<iostream>
#include<map>
using namespace std;

int main(){

    map<int,string>mp;

    cout<<endl;
    cout<<endl;

    mp[11]="Rohit";
    mp[2]="Kumar";
    mp[3]="Singh";
    mp[3]="Singh1";


    mp.insert({5,"Rahul"});
    cout<<"Before earse "<<endl;
    for(auto i:mp){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;

    mp.erase(11);
    cout<<"After earse "<<endl;
    for(auto i:mp){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;
    cout<<endl;


    cout<<"Presnt or not:- "<<mp.count(5)<<endl;
    
    cout<<endl;
    cout<<endl;

    mp.insert({6,"uhgoh"});
    for(auto i:mp){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;
    
    cout<<endl;

    auto it=mp.find(6);
    for(auto i=it; i!=mp.end(); i++){
        cout<<(*i).first<<endl;
    }
    cout<<endl;
    
    cout<<endl;

}