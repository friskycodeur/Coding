// https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> sortedNums (nums.begin(),nums.end());
        sort(sortedNums.begin(),sortedNums.end());
        unordered_map<int,int> m;
        int cnt=0,ex=0;
        m[sortedNums[0]]=0;
        for(int i=0;i<nums.size()-1;i++){
            if(sortedNums[i]!=sortedNums[i+1]){
                cnt++;
                m[sortedNums[i+1]]=ex+cnt;
            }else ex++;
        }
        for(int i=0;i<nums.size();i++){
            nums[i]=m[nums[i]];
        }
        return nums;
    }
};