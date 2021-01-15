class Solution {
public:
    vector<int> joinArray(vector<int>& arr,int n){
        vector<int> finalArr;
        for(int i=0;i<n;i++){
            finalArr.push_back(arr[i]);
            finalArr.push_back(arr[n+i]);
        }
        return finalArr;
    }
    
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> res_arr=joinArray(nums,n);
        return res_arr;
    }
    
};