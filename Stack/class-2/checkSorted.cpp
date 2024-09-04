#include<iostream>
#include<stack>
#include<limits.h>
using namespace std;
bool checkSorted(stack<int>& s, int element1){
    // Base case
    if(s.empty()){
        return true;
    }
//  1 case solve krna hai
 int element2 =s.top();
 s.pop();

 if(element2 < element1){
//  recursion
  bool aageKaAns= checkSorted(s,element2);
  return aageKaAns;
 }
 else{
    return false;
 }

}
int main(){
    stack<int> s;
    s.push(10);
    s.push(70);
    s.push(30);
    s.push(40);
    s.push(50);

    int element1 = INT_MAX;
    
   cout<< checkSorted(s,element1);
   
    return 0;
}