#include<iostream>
using namespace std;

void printAnArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(){
    int arr[]={23,45,67,89,2,4,6};
    int size = 7;

  printAnArray(arr,size);
    return 0;
}