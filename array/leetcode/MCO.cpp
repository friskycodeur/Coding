//Runtime: 32 ms
//Memory Usage: 36 MB

class Solution {
public:
    int repeatedOnes(vector<int>& arr,int n){
        int count=0,res=0;
        for(int i=0;i<n;i++){
            if(arr[i]==1){
                count++;
            }
            else{
                res=res>count?res:count;
                count=0;
            }
            res=res>count?res:count;
        }
        return res;
    }
    
    
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        return repeatedOnes(nums,n);
    }
};