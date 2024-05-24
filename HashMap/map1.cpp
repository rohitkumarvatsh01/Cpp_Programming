#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main()
{
    unordered_map<string, int>mp;

    pair<string, int> p = make_pair("rohit", 3);
    mp.insert(p);

    pair<string, int> pair2("kumar", 2);
    mp.insert(pair2);

    mp["ray"]=3;

    cout<<"Size of map:- "<<mp.size()<<endl;

    mp.erase("ray");

    cout<<"Present or Absent:- "<<mp.count("kumar")<<endl;

    cout<<mp["rohit"]<<endl;


    for(auto i:mp){
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<mp.size()<<endl;
}