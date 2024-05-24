#include<iostream>
using namespace std;

int countNumber(string str){
    int n=str.length();
    int count=0;

    for(int i=0; i<n; i++){
        if(str[i]>='0' && str[i]<='9'){
            count++;
        }
    }
    return count;
}

int main(){

    string str;
    cout<<"Enter the String:- "<<endl;
    cin>>str;

    int ans=countNumber(str);
    cout<<"The count of number in string is:- "<<ans<<endl;
    return 0;
}