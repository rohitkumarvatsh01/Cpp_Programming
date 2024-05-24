#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n:- "<<endl;
    cin>>n;

    int enter[n];
    cout<<"Enter the element of Enter the People in party:- "<<endl;
    for(int i=0; i<n; i++){
        cin>>enter[i];
    }

    int leave[n];
    cout<<"Enter the element of Leave the People in party:- "<<endl;
    for(int i=0; i<n; i++){
        cin>>leave[i];
    }
    
    int sum=0;
    int maxi=0;

    for(int i=0; i<n; i++){
        sum+=enter[i]-leave[i];
        maxi=max(maxi, sum);
    }

    cout<<"The maximum People in the party:- "<<endl;
    cout<<maxi<<endl;

return 0;
}