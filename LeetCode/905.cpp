// https://leetcode.com/problems/sort-array-by-parity/

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        int n=A.size();
        int i=0,j=n-1;
        while(i<j){
            if(!(A[i]&1) || A[j]&1){
                if(!(A[i]&1)) i++;
                if(A[j]&1) j--;
            }else{
                swap(A[i++],A[j--]);
            }
        }
        return A;
        
    }
};