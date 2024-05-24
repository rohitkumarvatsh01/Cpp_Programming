#include<bits/stdc++.h> 
using namespace std;

bool ispowerof3(int n) {

if(n<=0){
    return false;
}

return 1162261467%n==0;

} 

bool ispowerof2(int n){

return (n!=0) && ((n & (n-1))==0);

}
 

int main(){

int n; 
cin>>n;
bool a=ispowerof3(n);
bool b=ispowerof2(n);

if(a && b){ 
    return true;

} else{

return false;
}

return 0; 
    
}