// 4ms ; 7.7 MB


class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int sum=0;
        for (int i = 0; i < accounts.size(); i++){
            int temp_sum=0;
            for (int j = 0; j < accounts[i].size(); j++){
            temp_sum+=accounts[i][j];
            }
            sum=temp_sum>sum?temp_sum:sum;
        }
    return sum;
    }
    };