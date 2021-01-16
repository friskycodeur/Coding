//Runtime: 32 ms
//Memory Usage: 36 MB

class Solution {
public:
    int repeatedNumber(vector<int>& arr,int n,int a){
        int count=0,res=0;
        for(int i=0;i<n;i++){
            if(arr[i]==a){
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
        return repeatedOnes(nums,n,1);
    }
};