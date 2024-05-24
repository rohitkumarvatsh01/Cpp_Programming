#include<iostream>
using namespace std;

void swap(int even, odd){
    int temp;
    temp=even;
    even=odd;
    odd=temp;

    return even, odd;
}

int main()
{
    int even[5]={2,4,6,8,10};
    int odd[5]={1,3,5,7,9,11};
    cout<<"The sawp:- "<<swap(even, odd)<<endl;
    return 0;
}