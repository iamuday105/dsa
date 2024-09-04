#include<iostream>
#include<stack>
using namespace std;

void printMiddle(stack<int>& s, int count){
    // Base
    if(count == 0){
        cout<<s.top()<<" ";
        return;
    }
   //  1st Case
    int topElement = s.top();
    s.pop();
    count--;
   // recursion
    printMiddle(s,count);
   // BackTracking
    s.push(topElement);
}
int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(50);
    s.push(50);
 
    int count = s.size()/2;
    printMiddle(s,count);



    return 0;
}