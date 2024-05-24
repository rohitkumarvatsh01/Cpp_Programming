#include<iostream>
using namespace std;

void reverseString(string& name, int i, int j){
    cout<<"Call Receive from :- "<<name<<endl;

    //Base case
    if(i > j){
        return ;
    }

    swap(name[i], name[j]);
    i++;
    j--;

    reverseString(name, i,j);
}

int main(){

    string name="ROHIT";
    cout<<endl;
    reverseString(name, 0, name.length()-1);
    cout<<endl;
    cout<<name;
    return 0;
}