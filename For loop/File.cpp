#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string st = "hello rohit ";
    ofstream out("sample.txt");
    out<<st;

    return 0;
}