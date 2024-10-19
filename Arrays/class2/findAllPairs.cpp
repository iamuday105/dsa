// #include<iostream>
// using namespace std;
// int main(){
//     int arr[] = {12,45,67,34,56,76,54};
//     int size = 7;

//     for(int i=0;i<size;i++){
//         for(int j=i; j<size;j++){

//           cout<< "("<< i<<","<<j <<")"<<" ";
//         }
//         cout<<endl;
//     }

// }

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[] = {12,45,67,34,56,76,54};
//     int size = 7;

//     for(int i=0;i<size;i++){
//         for(int j=i+1; j<size;j++){

//           cout<< "("<< i<<","<<j <<")"<<" ";
//         }
//         cout<<endl;
//     }

// }

#include<iostream>
using namespace std;
int main(){
    int arr[] = {12,45,67,34,56,76,54};
    int size = 7;

    for(int i=0;i<size;i++){
        for(int j=size-1; j>=0;j--){

          cout<< "("<< i<<","<<j <<")"<<" ";
        }
        cout<<endl;
    }

}