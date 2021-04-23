// https://leetcode.com/problems/flipping-an-image/

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n=image.size();
        int i,j,k=0;
        while(k<n){
            int i=0;
            j=n-1;
            while(i<j){
                swap(image[k][i],image[k][j]);
                i++;j--;
            }
            k++;
        }
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                image[i][j]=image[i][j]==1?0:1;
            }
        }
        return image;
    }
};