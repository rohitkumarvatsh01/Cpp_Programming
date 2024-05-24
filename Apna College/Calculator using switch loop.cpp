#include<iostream>
using namespace std;
int main(){
    int button;
    cout<<"Enter your rating :- ";
    cin>>button;

    switch (button)
    {
    case 1:
        cout<<"*"<<endl;
        break;
    
    case 2:
        cout<<"**"<<endl;
        break;
    
    case 3:
        cout<<"***"<<endl;
        break;

    case 4:
        cout<<"****"<<endl;
        break;
    
    case 5:
        cout<<"*****"<<endl;
        break;

    default:
        cout<<"Invail rating ";
        break;
    }
    return 0;
}