// https://leetcode.com/problems/1-bit-and-2-bit-characters/submissions/

class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        if(bits.size()==1) return 1;
        int i=0;
        while(i<=bits.size()-2){
            if(bits[i]==0) ++i;
            else i+=2;
        }
        if(i==bits.size()-1){
            return 1;
        }
        return 0;
    }
};