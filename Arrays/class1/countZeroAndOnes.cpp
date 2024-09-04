#include<iostream>
using namespace std;

void countZeroAndOnes(int arr[], int size){
  int zeroCount=0;
  int oneCount =0;

for(int i=0;i<size;i++){
    if(arr[i]==0){
        zeroCount++;
    }

    if(arr[i]==1){
        oneCount++;
    }
}

cout<<"zeroCount: "<<zeroCount<<endl;
cout<<"oneCount: "<<oneCount<<endl;

}
int main(){
    int arr[]={1,1,0,0,0,1,1,1,1,1,1,1,0,0};
    int size=14;
    // int size =sizeof(arr)/sizeof(int);

    countZeroAndOnes(arr, size);
    return 0;
}