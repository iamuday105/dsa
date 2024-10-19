#include<iostream>
#include "algorithm.h" //ALGORITHM_h -- defined now
 
using namespace std;
int main(){
    int arr[] ={1,2,5,2,3};
    sort(arr,5);
    return 0;
}

//g++ -o is used to make exe from .os
//g++ -c is used to make .os from .cpp


//commands=====>>
// 1. g++ -c algorithm.cpp  
// 2. rm algorithm.cpp  
// 3. g++ -c main.cpp 
// 4. g++ algorithm.o main.o -o new_program 