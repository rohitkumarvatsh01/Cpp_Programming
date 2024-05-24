#include<iostream>
using namespace std;

void print(int n){
    //base case
    if(n==0){
        return;
    }
    //Recursive Call
    print(n-1);
    //Processing
    cout<<n<<endl;
}
int main(){
    int n;
    cin>>n;
    print(n);
return 0;
}