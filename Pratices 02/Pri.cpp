#include<iostream>
#include<queue>
using namespace std;

int main(){
    priority_queue<int>maxi;

    //priority_queue<int, vector<int>, greater<int>>mini;

    maxi.push_back(1);
    maxi.push_back(3);
    maxi.push_back(2);
    maxi.push_back(0);

    cout<<"Size -> "<<maxi.size()<<endl;



    return 0;


}



