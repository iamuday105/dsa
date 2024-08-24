#include<iostream>
#include<cmath>
using namespace std;
int decimalToBinaryMethod(int n){
  int binaryno =0;
  int i=0;
   while(n>0){
    int bit = n % 2;

    binaryno = bit * pow(10,i++) + binaryno;
    n=n/2;
    // n=n>>1; //bitwise method
   }
   return binaryno;
}
int main(){
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    int binary = decimalToBinaryMethod(n);

    cout<<"Binary No is: "<<binary<<endl;

    return 0;
}