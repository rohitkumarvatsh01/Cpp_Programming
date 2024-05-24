#include<iostream>
using namespace std;

int facrtorial(int n){
    factorial=01;
    for(int i=2; i<=n; i++){
        facrtorial*=i;
    }
    return factorial;

}


int main(){
    int n;
    int r;
    cin>>n>>r;

    int ans= fact(n)/(fact(r)*fact(r-c));
    cout<<ans<<endl;
    return 0;
}
