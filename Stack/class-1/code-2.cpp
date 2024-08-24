#include<iostream>
using namespace std;

class Stack{
    public:
         int* arr;
         int size;
         int top;

         Stack(int capacity){
             arr = new int(capacity);
             size = capacity;
             top = -1;   
         }

         void push(int val){
            if(top == size-1){
                //stack is already full
                cout<<"stack overflow"<<endl;
            }else{
                //stack me khali jagah hai abhi
                  top++;
                  arr[top]=val;
            }
           
         }

         void pop(){
            if(top == -1){
                cout<<"stack is empty"<<endl;
            }else{
                arr[top] = -1;
                top--;
            }
              
         }

         int getSize(){
             return top+1;
         }
        bool isEmpty(){
           if(top == -1){
            return true;
           }else{
            return false;
           }
        }
        int getTop(){
           if(top == -1){
            cout<<"there is no element at the top, stack is empty ";
            return -1;
           }else{
            return arr[top];
           }
        }
        //Stck me print function nahi hota ===>>>
        void print(){
            cout<< "printing stack"<<endl;
            for(int i; i<size;i++){
                cout<< arr[i]<<" ";
            }
            cout<<endl;
        }

    };
int main(){
     
     Stack s(5);
     s.push(10);
     s.push(20);
     s.push(30);
     s.push(40);
     s.push(50);
     s.print();

     cout<<s.getTop()<<endl;
     cout<<s.getSize()<<endl;
     cout<<s.isEmpty()<<endl;
     s.pop();
     s.print();
    return 0;
}
