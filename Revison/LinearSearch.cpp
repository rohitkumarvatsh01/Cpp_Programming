#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return -1;
}
int main(){
    int evenArray[6]={13,12,44,66,35,50};
    int oddArray[5]={12,32,11,565,3};

    int even=linearSearch(evenArray, 6, 686);
    int odd=linearSearch(oddArray, 5, 66);

    cout<<"The search element found or not found:- "<<even<<endl;    
    cout<<"The search element found or not found:- "<<odd<<endl;

return 0;
}