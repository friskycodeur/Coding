// https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size(),r=n-1,c=0,sum=0;
        while(r>=0 && c<m){
            if(grid[r][c]<0){
                --r;
                sum+=m-c;
            }
            else{
                ++c;
            }
        }
        return sum;
    }
};