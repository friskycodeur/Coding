// https://leetcode.com/problems/sort-array-by-parity-ii/submissions/

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        int i=0,j=1;
        while(i<A.size() && j<A.size()){
            if(A[i]%2==0 && A[j]%2==1){
                if(A[i]%2==0) i+=2;
                if(A[j]%2==0) j+=2;
            }else if(A[i]%2==1){
                swap(A[i],A[j]);
                j+=2;
            }else if(A[j]%2==0){
                swap(A[i],A[j]);
                i+=2;
            }
        }
        return A;
    }
};