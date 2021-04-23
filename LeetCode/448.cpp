// https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        vector<int> res;
        vector<bool> temp(n+1);
        for(int i=0;i<n;i++){
            temp[nums[i]]=1;
        }
        for(int i=1;i<=n;i++){
            if(!temp[i]){
                res.push_back(i);
            }
        }
        return res;
    }
};