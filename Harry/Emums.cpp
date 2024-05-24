#include<iostream>
using namespace std;

int main()
{
    enum meal {Breakfast, Lunch, Dinner};
    
    //Method 1
    meal m1 = Breakfast;
    meal m2 = Lunch;
    meal m3 = Dinner;

    cout<<m1<<endl;
    cout<<m2<<endl;
    cout<<m3<<endl;


    //Method 2
    // cout<<Breakfast<<endl;
    // cout<<Lunch<<endl;
    // cout<<Dinner<<endl;

    return 0;
}