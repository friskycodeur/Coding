// Runtime: 64 ms
// Memory Usage: 33.5 MB

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
    int n=nums.size();
    vector<int> res;
    sort(nums.begin(),nums.end());
    for(int i=0;i<n-1;i++){
        if(nums[i]==nums[i+1]) 
            res.push_back(nums[i]); 
    }
    return res;
    }
};