// https://leetcode.com/problems/majority-element/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // map approach
        // unordered_map<int,int> m;
        // for(int i=0;i<nums.size();i++){
        //     m[nums[i]]++;
        // }
        // for(auto it:m){
        //     if(it.second>nums.size()/2) return it.first;
        // }
        // return -1;
        
        //boyer-moore
        int sum=0,c=0;
        for(int ele:nums){
            if(sum==0){
                c=ele;
                sum=1;
            }else{
                if(c==ele) sum++;
                else sum--;
            }
        }
        return c;
    }
};