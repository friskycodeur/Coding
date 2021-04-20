// difficulty : Medium

class Solution {
public:
    
    bool sortcol(const vector<int>& v1,const vector<int>& v2 ) {
        return v1[0] < v2[0];
    }
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        // int n=intervals.size();
        // vector<vector<int>> ans(n,vector<int>(2, 0));
        set<int> idx;
        sort(intervals.begin(),intervals.end(),
          [] (const std::vector<int> &a, const std::vector<int> &b)
          {
              return a[0] < b[0];
          });
        int i=0,j=1;
        while(i<intervals.size() && j<intervals.size()){
            if(intervals[i][1]>=intervals[j][0]){
                if(intervals[i][1]<intervals[j][1]) intervals[i][1]=intervals[j][1];
                j++;
                idx.insert(i);
            }else if(intervals[i][1]<intervals[j][0]){
                idx.insert(i);
                i=j;
            }
        }
        int n=idx.size();
        vector<vector<int>> ans(n,vector<int>(2, 0));
        i=0;
        for(auto value:idx){
            ans[i][0]=(intervals[value][0]);
            ans[i][1]=(intervals[value][1]);
            i++;
        }
        if(intervals.size()==1) return intervals;
        else return ans;
    }
};