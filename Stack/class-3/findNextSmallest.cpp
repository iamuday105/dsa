#include<iostream>
#include<stack>
#include<algorithm>
#include<vector>
using namespace std;

void solve(int arr[], int n, vector<int>& ans){
  stack<int> s;
  s.push(-1);

  for(int i= n-1; i>=0 ;i--){
      int element = arr[i];

     while(s.top() > element){
        s.pop();
     }

     ans.push_back(s.top());
     s.push(element);
  }  
}

int main(){
  int arr[] ={2,4,3,1,5};
  int size = 5;

  vector<int> ans;

  solve(arr,size, ans);
reverse(ans.begin(), ans.end());
  for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
  }

}