// difficulty medium


// map soln :: time complexity O(nlogn)
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> m;
        int x;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        for(auto it:m){
            if(it.second>=2) x=it.first;
        }
        return x;
    }
};

// vector soln :: time complexity O(n)

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int> vec;
        for(int i=0;i<nums.size();i++){
            vec.push_back(0);
        }
        for(int i=0;i<nums.size();i++){
            if(vec[nums[i]]==1) return nums[i];
            vec[nums[i]]=1;
        }
        return 0;
    }
};