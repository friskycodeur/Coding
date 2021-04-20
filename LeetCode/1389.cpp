// https://leetcode.com/problems/create-target-array-in-the-given-order/

class Solution {
public:
    void shiftRight(vector<int>& a,int x,int n){
        for(int i=n-1;i>x;i--){
            a[i]=a[i-1];
        }
    }
    
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        int n=nums.size();
        vector<int> target(n);
        for(int i=0;i<n;i++){
            if(target[index[i]]!=0) shiftRight(target,index[i],n);
            target[index[i]]=nums[i];
        }
        return target;
    }
};