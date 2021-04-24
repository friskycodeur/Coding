// https://leetcode.com/problems/check-if-the-sentence-is-pangram/

class Solution {
public:
    bool checkIfPangram(string sentence) {
        if(sentence.size()<26) return 0;
        unordered_map<char,int> alphabets_counter;
        for(auto i:sentence){
            alphabets_counter[i]++;
        }
        if(alphabets_counter.size()==26) return 1;
        return 0;
    }
};