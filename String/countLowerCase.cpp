#include<iostream>
using namespace std;

int countLowerCase(string str){
    int n=str.length();
    int count=0;

    for(int i=0; i<n; i++){
        if(str[i]>='a' && str[i]<='z'){
            count++;
        }
    }
    return count;
}

int main(){

    string str;
    cout<<"Enter the string:- "<<endl;
    cin>>str;

    int ans=countLowerCase(str);
    cout<<"The count of lower case is:- "<<ans<<endl;
    return 0;
}