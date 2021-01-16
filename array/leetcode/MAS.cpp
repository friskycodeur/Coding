// Runtime: 124 ms
// Memory Usage: 77.7 MB
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        double max_sum=0,sum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        max_sum=sum/k;
        for(int i=0,j=k;i<n&&j<n;i++,j++){
            sum-=nums[i];
            sum+=nums[j];
            max_sum=max(sum/k,max_sum);
        }
        return max_sum;
    }
        
};