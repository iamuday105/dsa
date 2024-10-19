class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> finalAns;

        for(int i=0; i< nums.size() ;i++){
            for(int j= i+1; j<nums.size(); j++){
                int ans = nums[i] + nums[j];
                if(ans == target){
                    finalAns.push_back(i);
                    finalAns.push_back(j);
                }
            }
        }
         return finalAns;
        
    }
   
};