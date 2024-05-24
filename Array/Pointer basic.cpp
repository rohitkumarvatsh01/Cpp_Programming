#include<iostream>
using namespace std;
int main()
{
    int num=5;
    //cout<<num<<end;
    cout<<"Size of num:- "<< sizeof(num) <<endl;
    
    cout<<"Address of num is:- "<<&num<<endl;
    
    cout<<"INTEGER"<<endl;
    int *ptr = &num;
    cout<<"Address of num:- "<<ptr<<endl;
    cout<<"value is:- "<<*ptr<<endl;
    cout<<"Size of pointer:- "<<sizeof(*ptr)<<endl;
    
    cout<<"CHARACTER"<<endl;
    char ch='R';
    char *ptr1=&ch;
    cout<<ptr1<<endl;
    cout<<*ptr1<<endl;
    cout<<"Size of pointer:- "<<sizeof(*ptr1)<<endl;
    
    cout<<"DOUBLE"<<endl;
    double d=4.3;
    double *ptr2=&d;
    cout<<"Tha address of double:- "<<ptr2<<endl;
    cout<<"The value of double:- "<<*ptr2<<endl;
    cout<<"Size of double:- "<<sizeof(ptr2)<<endl;
    
    
    
    
    return 0;
    
}