// https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/submissions/


class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0,j=numbers.size()-1;
        while(numbers[i]+numbers[j]!=target){
            if(numbers[i]+numbers[j]>target) j--;
            else i++;
        }
        return {i+1,j+1};
    }
};