// Polymorphism in cpp

#include <iostream>
using namespace std;

// function overloading

class Add
{
    public:
     
    //x, y two int addition 
    int sum(int x, int y){
        cout<<"sum of 2 int "<<endl;
        return x + y;
    }

   //x, y two int addition 
    int sum(int x, int y, int z){
    cout<<"sum of 3 int "<<endl;
        return x + y + z;
    }

   // double add
    double sum(double x, double y){
    cout<<"sum of two doubles "<<endl;
        return x * y;
    }
};

// operator overloading

class Complex
{
    public:
     int real;
     int imag;

    Complex(){
        real = imag = -1;
    } 

    Complex(int r, int i):real(r), imag(i){
       
    } 

    // Syntax
    // Ret_type operator <op> (args){
    //     // code
    //     return;
    // }

Complex operator + (const Complex &B)
{
    // this point A instance
    Complex temp;
    temp.real =this->real + B.real;
    temp.imag =this->imag + B.imag;
    return temp;
}

bool operator == (const Complex &B)
{
    // this point A instance
   return (this->real ==B.real) && (this->imag == B.imag);
}

    void print()
    {
        printf("[%d + i%d]\n", this->real, this->imag );
    }

};   

int main(){
// operator overloading
  Complex A(2, 5);
  A.print();
  Complex B(3,3);
  B.print();

Complex C =A + B;
C.print();

bool a= A==B;
cout<< a << endl;

// function overloading
    // int x=5;
    // int y=5;
    // int z=2;

    // Add add;
    // cout<< add.sum(x,y)<<endl;
    // cout<< add.sum(x,y,z)<<endl;
    // cout<< add.sum(4.5, 2.0)<<endl;
    return 0;
}