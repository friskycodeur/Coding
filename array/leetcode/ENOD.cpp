// Runtime: 8 ms
// Memory Usage: 9.7 MB

class Solution {
public:
    bool IsNumberOfDigitsEven(int num){
        string s=to_string(num);
        int n=s.length();
        if(n%2==0)
            return true;
        else
            return false;
    }
    
    
    int findNumbers(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            count += IsNumberOfDigitsEven(nums[i]);
        }
        return count;
    }
};