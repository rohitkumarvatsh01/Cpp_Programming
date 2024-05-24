#include<iostream>
using namespace std;

int volume(double r, int h){
    return (3.14*r*r*h);
}
int volume(int a){
    return (a*a*a);
}
int volume(int l, int b, int h){
    return (l*b*h);
}

int main()
{
    cout<<"The volume of cyclinder is :- "<<volume(3,7,6)<<endl;
    cout<<"The volume of cube is :- "<<volume(3,6)<<endl;
    cout<<"The volume of rectangal :- "<<volume(3)<<endl;

    return 0;
}