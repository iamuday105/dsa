#include <iostream>
using namespace std;
class CircularQueue
{
private:
    int *arr;
    int n;
    int front;
    int rear;

public:
    CircularQueue(int size)
    {
        this->n = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    void push(int val)
    {
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
    void pop()
    {
   
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

    int getFront()
    {
        if (front = -1)
        {
            cout << "Queue is empty" << endl;
        }
        else
        {
            return arr[front];
        }
    }
    int getRear()
    {
        if (rear = -1)
        {
            cout << "Queue is empty" << endl;
        }
        else
        {
            return arr[rear];
        }
    }

    int getSize(){
        if(front == -1 && rear == -1 ){
            return 0;
        }else if(rear>= front){
            return rear- front +1;
        }
        else{
            return n-front + rear + 1;
        }
    }
    bool isEmpty(){
    if(front == -1 && rear == -1){
            return true;
        }
        else{
            return false; 
        }
    }
    void print(){
        for(int i=0; i< n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
} ;
int main(){

    CircularQueue cq(5);

    cq.push(10);
    cq.push(20);
    
    cq.push(30);
    cq.push(40);
    cq.push(40);
 
    // cq.push(50);
    cq.pop();
    cq.pop();
    // cq.pop();
       cq.push(60);
    // cq.pop();

    cq.print();

    cout<<cq.getSize()<<endl;

    return 0;
}