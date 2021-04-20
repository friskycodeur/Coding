// Difficulty :: Medium


// Without binary search

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int t) {
        int sus_row=-1;
        int r=matrix.size(),c=matrix[0].size();
        for(int i=0;i<r;i++){
            if(t==matrix[i][c-1]) return true;
            if(t<matrix[i][c-1]){
                sus_row=i;
                break;
            }
        }
        if(sus_row==-1){
            return false;
        }
        for(int i=0;i<c;i++){
            if(matrix[sus_row][i]==t) return true;
        }
        return false;
    }
};


// Using binary search

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int t) {
        int sus_row=-1;
        int r=matrix.size(),c=matrix[0].size();
        for(int i=0;i<r;i++){
            if(t==matrix[i][c-1]) return true;
            if(t<matrix[i][c-1]){
                sus_row=i;
                break;
            }
        }
        if(sus_row==-1){
            return false;
        }
        int start=0,end=c-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(t==matrix[sus_row][mid]) return true;
            else if(t>matrix[sus_row][mid]) start=mid+1;
            else end=mid-1;
        }
        return false;
    }
};