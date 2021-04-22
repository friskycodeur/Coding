// https://leetcode.com/problems/get-maximum-in-generated-array/submissions/

class Solution {
public:
    int getMaximumGenerated(int n) {
        if(n==0) return 0;
        vector<int> res={0,1};
        for(int i=2;i<=n;i++){
            if((i&1)==0){
                res.push_back(res[i/2]);
            }else{
                res.push_back(res[ceil(i/2.0)]+res[(i/2)]);
            }
        }
        return *max_element(res.begin(),res.end());
    }
};