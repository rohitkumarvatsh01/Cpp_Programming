#include<iostream>
using namespace std;

bool checkPalidrome(string str, int i, int j){
    //Base case
    if(i>j){
        return true;
    }
    
    //Recursive call
    if(str[i] != str[j]){
        return false;
    }
    else{
        checkPalidrome(str, i+1, j-1);
    }
}

int main(){
    string name="AbbcbbA";
    cout<<endl;
    
    bool isPalindrome = checkPalidrome(name, 0, name.length()-1);
    
    if(isPalindrome){
        cout<<"The string is a Palindrome"<<endl;
    }
    else{
        cout<<"The string is not Palindrome"<<endl;
    }
    cout<<endl;
    return 0;
}