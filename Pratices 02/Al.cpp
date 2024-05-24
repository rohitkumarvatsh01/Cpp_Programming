#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
using namespace std;

int main(){
    vector<int>v;

    v.push_back(5);
    v.push_back(2);
    v.push_back(3);
    v.push_back(1);
    v.push_back(5);
    v.push_back(4);
    v.push_back(-1);
    v.push_back(1);


    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    
    cout<<"The Front element:- "<<v.front()<<endl;
    cout<<"The back element:- "<<v.back()<<endl;
    cout<<endl;
    
    int a=95, b=300;
    
    cout<<"Maximum:- "<<max(a,b)<<endl;
    cout<<"Minimum:- "<<min(a,b)<<endl;
    cout<<endl;
    
    swap(a,b);
    cout<<"swaping:- "<<"a:- "<<a<<" b:- "<<b<<endl;
    cout<<endl;
    
    sort(v.begin(), v.end());
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    
    cout<<"Empty or not:- "<<v.empty()<<endl;
    cout<<endl;


    cout<<"reverse" <<endl;
    string abcd="ABCD";
    reverse(abcd.begin(), abcd.end());
    for(auto i:abcd){
        cout<<i<<" ";
    }
    cout<<endl;

    rotate(v.begin(), v.begin()+1, v.end());
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    //v.pop_back();
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    

    cout<<"Empty or not:- "<<v.empty()<<endl;
    cout<<endl;
}