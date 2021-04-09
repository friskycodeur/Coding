//Difficulty : Easy

// 2D-matrix approach ; Did all on my own (TLE)

// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int n=prices.size();
//         vector<vector<int>> mtx(n,vector<int> (n,0));
//         int max=0;
//         for(int i=0;i<n;i++){
//             for(int j=i+1;j<n;j++){
//                 mtx[i][j]=prices[j]-prices[i];
//                 max=max>mtx[i][j]?max:mtx[i][j];
//             }
//         }
//         return max;
        
//     }
// };


// Simple Solution using constant space
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price=INT_MAX;
        int max_profit=0;
        for(int i=0;i<prices.size();i++){
            min_price=min(min_price,prices[i]);
            max_profit=max(max_profit,prices[i]-min_price);
        }
        return max_profit;
    }
};