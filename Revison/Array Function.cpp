#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    
    int array1[5]={1,2,3,4,5};
    printArray(array1, 5);
    cout<<sizeof(array1)/sizeof(array1[0]);

    cout<<endl;

    int array2[10]={1,2};
    printArray(array2, 10);
    cout<<endl<<sizeof(array2)/sizeof(array2[0]);

    cout<<endl;

    int array3[15]={0};
    printArray(array3, 15);
    cout<<endl<<sizeof(array3)/sizeof(array3[0]);

    cout<<endl;

    int array4[20]={1};
    printArray(array4, 20);
    cout<<endl<<sizeof(array4)/sizeof(array4[0]);

    cout<<endl;

    int array5[25];
    printArray(array5, 25);
    cout<<endl<<sizeof(array5)/sizeof(array5[0]);

    cout<<endl;

    return 0;
}

