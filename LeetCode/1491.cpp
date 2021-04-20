// https://leetcode.com/problems/average-salary-excluding-the-minimum-and-maximum-salary/

class Solution {
public:
    double average(vector<int>& salary) {
        int mx=salary[0],mn=salary[0];
        double sum=salary[0];
        for(int i=1;i<salary.size();i++){
            mx=mx>salary[i]?mx:salary[i];
            mn=mn<salary[i]?mn:salary[i];
            sum+=salary[i];
        }
        sum=sum-mn-mx;
        return sum/(salary.size()-2);
    }
};