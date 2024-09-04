// Seach 10 is present in an array or not 

#include<iostream>
using namespace std;

int linearSearch(int arr[], int size, int target){

    for(int i=0;i<size;i++){

        if(arr[i] == target){
            return i;
        }
       
    }
     return -1;
};
int main(){
    int arr[] ={23,56,78,67,10,45,23};
    int size= 7;
    int target = 10;
     
   int ans = linearSearch(arr, size, target);
   
   cout<<"Target present at index: "<< ans;

    return 0;
}