#include<iostream>
#include<map>
#include<unordered_map>

using namespace std;

int main(){
    
    //Creation of map
    unordered_map<string, int>m;
    
    //Instertion

    //1
    pair<string ,int> p = make_pair("rohit", 1);
    m.insert(p);
    
    //2
    pair<string, int> pair2("kumar", 2);
    m.insert(pair2);
    
    //3
    m["Ray"]=3;

    //Search
    cout<< m["kumar"]<<endl;
    cout<<m.at("Ray")<<endl;

    //Size
    cout<<"Size of map:- "<< m.size() <<endl;

    //To check the precence
    cout<<"Absent or Present:-"<<m.count("kumar")<<endl;

    //Erase
    m.erase("kumar");
    cout<<"Size of map:- "<<m.size()<<endl;

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    //Iterator
    unordered_map<string, int> :: iterator it = m.begin();
    while(it != m.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }
 
    return 0;
}