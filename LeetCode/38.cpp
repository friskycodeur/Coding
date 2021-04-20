// https://leetcode.com/problems/count-and-say/

class Solution {
public:
    string countAndSay(int n) {
        string s="1";
        for(int i=1;i<n;i++){
            int size=s.size();
            int j=0;
            string temp="";
            while(j<size){
                char c=s[j];
                int cnt=0;
                
                while(j<size &&s[j]==c){
                    cnt++;
                    j++;
                }
                char t='0'+cnt;
                temp+=t;
                temp+=c;
            }
            s=temp;
        }
        return s;
    }
};