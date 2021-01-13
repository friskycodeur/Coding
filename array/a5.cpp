// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
// LEETCODE



class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.end()-nums.begin();
        vector<int> res;
        for(int i=0;i<n-1;i++){    
            for(int j=i+1;j<n;j++){
                if(nums[i]+nums[j]==target){
                    res.push_back(i);
                    res.push_back(j);
                }
                
            }
        }
        return res;
    }
};