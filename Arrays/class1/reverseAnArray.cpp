#include<iostream>
using namespace std;

void reverseAnArray(int arr[], int size){
    int s=0;
    int e=size-1;

     for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}


int main(){
    int arr[] = {10,20,30,40,50,60,70,80,90};
    int size =sizeof(arr)/sizeof(int);

          reverseAnArray(arr, size);

    return 0;
}