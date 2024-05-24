#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ofstream out;
    out.open("sample.txt");
    out<<"This is me\n";
    out<<"This is also me";
    out.close();

    return 0;
}