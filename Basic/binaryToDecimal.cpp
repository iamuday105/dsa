#include<iostream>
#include<cmath>
using namespace std;
int binaryToDecimalMethod(int n){
  int decimalno =0;
  int i=0;
   while(n>0){
    int bit = n % 10;

    decimalno = bit * pow(2,i++) + decimalno;
    n=n/10;
   
   }
   return decimalno;
}
int main(){
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    int decimal = binaryToDecimalMethod(n);

    cout<<"Binary No is: "<<decimal<<endl;

    return 0;
}