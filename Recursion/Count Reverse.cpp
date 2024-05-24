#include<iostream>
using namespace std;

void countPrint(int n){
    //Base case
    if(n==0){
        return ;
    }

    cout<<n<<endl;

    countPrint(n-1);

    

}

int main(){
    int n;
    cin>>n;
    cout<<endl;
    countPrint(n);

return 0;
}