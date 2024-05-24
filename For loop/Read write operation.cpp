#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream hout("simple.txt");
    string name;
    cout<<"Enter your name";
    cin>>name;

    hout<<name + "is my name";
    hout.close();
    ifstream hin("simple.txt");
    string content;
    hin>>content;
    cout<<"the content of this file"<<content;
    hin.close();
    return 0;

    return 0;
}