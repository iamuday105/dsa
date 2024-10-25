#include<iostream>
using namespace std;
class DequeCircularQueue{
   private: 
     int *arr;
     int n;
     int front;
     int rear;
   public:
       DequeCircularQueue(int size){
        this->n = size;
        arr = new int[size];
        front = -1;
        rear = -1;
       }

    void pushFront(int val){
     // 4 cases: Overflow, first element, circular nature, noramal flow
 if (front == 0 && rear == n - 1 || (rear == front - 1))
        {
            cout << "Overflow" << endl;
        }
        else if (front == -1 && rear == -1)
        {
            front++;
            rear++;
            arr[rear] = val;
        }  
        else if(front == 0 && rear != n-1) {
            //circular case
            front = n-1;
            arr[front] = val;

        }else{
               front--;
            arr[front] = val;
        }

    }  
    void pushBack(int val){
         
           // 4 cases: Overflow, first element, circular nature, noramal flow
        if (front == 0 && rear == n - 1 || (rear == front - 1))
        {
            cout << "Overflow" << endl;
        }
        else if (front == -1 && rear == -1)
        {
            front++;
            rear++;
            arr[rear] = val;
        }
        else if (rear == n - 1 && front != 0)
        {
            rear = 0;
            arr[rear] = val;
        }
        else
        {
            rear++;
            arr[rear] = val;
        }

    }
    void popFront(){

        // 4 cases -> Underflow , single element , circular nature, normal flow
        if (front == -1 && rear == -1)
        {
            cout << "Underflow" << endl;
        }
        else if (front == rear)
        {
            arr[front] = -1;
            front = -1;
            rear = -1;
        }
        else if (front == n - 1)
        {
            // circular nature
            arr[front] = -1;
            front = 0;
        }
        else {
     
         //normal case
         arr[front] = -1;
         front++;
      }

    }
    void popBack(){
          // 4 cases -> Underflow , single element , circular nature, normal flow
        if (front == -1 && rear == -1)
        {
            cout << "Underflow" << endl;
        }
        else if (front == rear)
        {
            arr[front] = -1;
            front = -1;
            rear = -1;
        }else if(rear == 0 ){
           
            arr[rear] = -1;
             rear = n-1;
        }else{
        arr[rear] = -1;
         front--;
        }
      
    }
   void print(){
        for(int i=0; i< n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    DequeCircularQueue dcq(5);

    dcq.pushFront(10);
    // dcq.pushFront(20);
    // dcq.pushBack(40);
      dcq.pushBack(20);
      dcq.popFront();

    // dcq.pushBack(40);

     dcq.print();
    return 0;
}