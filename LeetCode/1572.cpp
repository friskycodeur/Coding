// https://leetcode.com/problems/matrix-diagonal-sum/submissions/

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();
        if(n==1) return mat[0][0];
        int i=0,j=0,sum=0;
        while(i<n && j<n){
            sum+=mat[i][j];
            i++;j++;
        }
        i=0,j=n-1;
        while(i<n && j>=0){
            sum+=mat[i][j];
            i++;j--;
        }
        if(n&1==1) return sum-mat[(n/2)][(n/2)];
        return sum;
    }
};