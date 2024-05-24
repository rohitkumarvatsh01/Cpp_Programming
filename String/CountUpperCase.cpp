#include<iostream>
using namespace std;

int countUpperCase(string str){
    int n=str.length();
    int count=0;

    for(int i=0; i<n; i++){
        if(str[i]>='A' && str[i]<='Z'){
            count++;
        }
    }
    return count;
}

int main(){

    string str;
    cout<<"Enter the String:- "<<endl;
    cin>>str;

    int ans=countUpperCase(str);

    cout<<"The Count of upper case in String is:- "<<ans<<endl;

    return 0;
}