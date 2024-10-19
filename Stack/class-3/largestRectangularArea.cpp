#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;

void solve(vector<int>&v, vector<int>& ans){
   stack<int> s;
   s.push(-1);

   int n= v.size();

   for(int i=n-1; i>=0;i--){
int  element = v[i];

 if(s.top()>element){
    s.pop();
   }

   ans.push_back(s.top());
   s.push(element);
   }

   
}

int main(){
    vector<int> v{10,4,6,8,2,1};

    vector<int> ans;

    solve(v, ans);

reverse(ans.begin(), ans.end());

for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
}

    return 0;
}