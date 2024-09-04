#include<iostream>
#include<stack>
using namespace std; 
int main(){
    stack<char>s; //galti kroge char type ka hi stack lena int type ka nhi.
    string name = "amitwala";


   // insertion
    for(int i=0; i<name.length();i++){
        char ch = name[i];
        s.push(ch);
    }

   //retrival of stack 
    while(!s.empty()){
        cout << s.top();
        s.pop();
    }
    return 0;
}