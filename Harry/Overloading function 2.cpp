#include<iostream>
using namespace std;

int sum(int a, int b){
    return a+b;
}
int sum(int a, int b, int c){
    return a+b+c;
}
int sum(int a, int b, int c, int d){
    return a+b+c+d;
}
int sum(int a, int b, int c, int d, int e){
    return a+b+c+d+e;
}
int sum(int a, int b, int c, int d, int e, int f){
    return a+b+c+d+e+f;
}
int sum(int a, int b, int c, int d, int e, int f, int g){
    return a+b+c+d+e+f+g;
}
int sum(int a, int b, int c, int d, int e, int f, int g, int h){
    return a+b+c+d+e+f+g+h;
}
int sum(int a, int b, int c, int d, int e, int f, int g, int h, int i){
    return a+b+c+d+e+f+g+h+i;
}

int main()
{
    cout<<sum(1,2,3)<<endl;
    cout<<sum(1,2)<<endl;
    // yha pr serial me nhi hoga to v kaam karega 
    //wh apne aap le legan function ko
    cout<<sum(1,2,3,4)<<endl;
    cout<<sum(1,2,3,4,5)<<endl;
    cout<<sum(1,2,3,4,5,6)<<endl;
    cout<<sum(1,2,3,4,5,6,7)<<endl;
    cout<<sum(1,2,3,4,5,6,7,8)<<endl;
    cout<<sum(1,2,3,4,5,6,7,.8,9)<<endl;
 
    return 0;
}