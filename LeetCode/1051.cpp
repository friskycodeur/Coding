// https://leetcode.com/problems/height-checker/

class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int cnt=0;
        vector<int> sorted_heights;
        sorted_heights=heights;
        sort(sorted_heights.begin(),sorted_heights.end());
        for(int i=0;i<heights.size();i++){
            if(heights[i]!=sorted_heights[i]) cnt++;
        }
        return cnt;
    }
};