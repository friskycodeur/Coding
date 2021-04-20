// https://leetcode.com/problems/sum-of-unique-elements/

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        vector<int> cnt;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            cnt[nums[i]]++;
        }
        for(int i=1;i<cnt.size();i++){
            if(cnt[nums[i]]==1) sum+=i;
        }
        return sum;
    }
};