#include<iostream>
using namespace std;

void reachHome(int source, int destination){
    
    cout<<"Source: "<<source<<" Destination: "<<destination<<endl;

 //Base Case
    if(source == destination){
        cout<<"Ghar pahuch gya hu "<<endl;
        return ;
    }
    
 //Processing
    source++;

 //Recursive Call
    reachHome(source, destination);
}

int main(){
    int destination=10;
    int source=1;
    cout<<endl;
    reachHome(source, destination);

return 0;
}