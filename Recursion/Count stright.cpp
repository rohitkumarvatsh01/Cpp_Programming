#include<iostream>
using namespace std;

void countPrint(int n){
    if(n==0){
        return ;
    }
    
    countPrint(n-1);

    cout<<n<<endl;
}

int main(){
    int n;
    cin>>n;
    cout<<endl;
    countPrint(n);
    

return 0;
}