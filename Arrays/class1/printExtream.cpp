#include<iostream>
using namespace std;

void printExtream(int arr[], int size){

    int s=0;
    int e =size-1;
    // int i=0;
    while(s <= e){
        if(arr[s]==arr[e]){
            cout<<arr[s]<<" ";
        }else{
        cout<<arr[s]<<" ";
        cout<<arr[e]<<" ";
        }
        

        s++;
        e--;
    }
}

int main(){
  int arr[] = {10,20,30,40,50,60,70,80,90};
  int size =sizeof(arr)/sizeof(int);

    printExtream(arr,size);
    return 0;
}