#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int>d;

    d.push_back(1);
    d.push_back(2);
    cout<<endl;

    cout<<"Print First index Element: "<<d.at(1)<<endl;

    cout<<"Front: "<<d.front()<<endl;
    cout<<"Back "<<d.back()<<endl;

    cout<<"Empty or not: "<<d.empty()<<endl;

    //cout<<"Before Erase: "<<(d.begin()+1);

    cout<<"After Erase: "<<d.size()<<endl;
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
}