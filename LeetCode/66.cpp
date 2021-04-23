// https://leetcode.com/problems/plus-one/submissions/

class Solution {
public:
    void rightShift(vector<int>& arr){
        int n=arr.size();
        for(int i=n-1;i>0;i--){
            arr[i]=arr[i-1];
        }
        arr[0]=1;
    }
    
    vector<int> plusOne(vector<int>& digits) {
       int i=digits.size()-1;
        int cnt=0;
        while(i>=0){
            if(digits[i]==9){
                digits[i]=0;
                i--;
                cnt=1;
            }else{
                digits[i]+=1;
                cnt=0;
                break;
            }
        }
        if(cnt==1){
            digits.push_back(0);
            rightShift(digits);
        }
        return digits;
    }
};