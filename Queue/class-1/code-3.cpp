#include<iostream>
using namespace std; 

class Deque{
private:
  int *arr;
  int n;
  int front;
  int rear;
public:

  Deque(int size){
    this->n =size;
    arr = new int [size];
    front = -1;
    rear = -1;

  }
void pushFront(int val){
    if(front == 0){
        //iska mtlab mere pass koi jagah hi nahi hai insert karne ke liye
        cout<<"Overflow"<<endl;
    }else if(front == -1 && rear == -1){
        // queue is empty 
        front++;
        rear++;
        arr[0] = val;
      
    }else{
        //normal flow 
        front--;
        arr[front] = val;
    }

}  
void pushBack(int val){

        if (rear == n-1){
            cout<< "Overflow"<<endl;
        }
        else if ( front == -1 && rear == -1){
            // inserting first element;
            front ++;
            rear++;
            arr[rear] = val;
        }else{
            // normal flow
            rear++;
            arr [rear] = val;
        }

}
void popFront(){

    
        if(front == -1 && rear == -1){
            // queue is empty 
            cout<< "Underflow"<<endl;
        }
        else if(front == rear){
            // single element 
            arr[front] = -1;
            front = -1;
            rear = -1;
        }
        else{
            //normal flow
            arr[front] = -1;
            front ++;
        }

}
void popBack(){

    if(front == -1 && rear == -1){
        //is case me queue pehale se empty hai

        cout <<"Underflow"<<endl;
    }else if(front == rear){
        // 1 element present

        front = -1;
        rear = -1;
    }else{
        //normal flow
        arr[rear] = -1;
        rear--;

    }

}
void print(){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
  
};
int main(){
    Deque dq(5);

    dq.pushFront(12);
    dq.pushBack(23);
    dq.pushFront(30);
    dq.pushBack(40);
    dq.print();
    dq.popBack();
    dq.pushBack(50);
    dq.popFront();
    dq.print();
     
    return 0  ;
}