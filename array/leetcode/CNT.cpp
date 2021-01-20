// Runtime: 76 ms
// Memory Usage: 8.9 MB


class Solution {
public:
    Solution(){
        ios::sync_with_stdio(0); cout.tie(0); cin.tie(0);
    }
    int numTeams(vector<int>& rating) {
        int n=rating.size(),rl,rg,ll,lg,res=0;
        if(n<3) return 0;
        for(int i=0;i<n;i++){
            rl=0,rg=0,ll=0,lg=0;
            for(int j=0;j<i;j++){
                if(rating[j]>rating[i]) lg++;
                else ll++;
            }
            for(int j=i+1;j<n;j++){
                if(rating[j]>rating[i]) rg++;
                else rl++;
            }
            res+=ll*rg+rl*lg;
        }
        return res;
    }
};