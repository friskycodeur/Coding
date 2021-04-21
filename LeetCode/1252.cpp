//https://leetcode.com/problems/cells-with-odd-values-in-a-matrix/ 

class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        std::vector<int> rows(m, 0);
        std::vector<int> cols(n, 0);
        
        for(auto& i: indices)
        {
            rows[i[0]]++;
            cols[i[1]]++;
        }
        
        int cnt = 0, rowcount = 0;
        for(auto x: rows)
        {
            if(x % 2 != 0)
            {
                cnt += n;
                ++rowcount;
            }
        }
    
        for(auto x: cols)
        {
            if(x % 2 != 0)
               cnt = cnt - rowcount + (m - rowcount);
        }
        return cnt;
    }
};