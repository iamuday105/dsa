#include<iostream>
using namespace std;

void printAnArray(int arr[],int size){
    int ans =0;
    for(int i=0;i<size;i++){
        ans =ans^arr[i];
    }
    cout<<ans;
}


int main(){
    int arr[]={1,2,4,8,4,2,1};
    int size = 7;

  printAnArray(arr,size);
    return 0;
}


// ============================================>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// leetcode 
// 540. Single Element in a Sorted Array

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            ans = ans^nums[i];
        }
        
        return ans;
    }
};

// 136. Single Number

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            ans = ans^nums[i];
        }
        
        return ans;
        
    }
};