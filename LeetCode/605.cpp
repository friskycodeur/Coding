// https://leetcode.com/problems/can-place-flowers/submissions/

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(flowerbed.size()==1){
            if(n==0) return true;
            else if(flowerbed[0]==0 && n==1) return true;
        }
        
        int av_ps=0;
        if(flowerbed[0]==0 && flowerbed[1]==0){
            av_ps++;flowerbed[0]=1;
        }
        if(flowerbed[flowerbed.size()-1]==0 && flowerbed[flowerbed.size()-2]==0) {
            av_ps++;
            flowerbed[flowerbed.size()-1]=1;
        }
        for(int i=1;i<flowerbed.size()-1;i++){
            if(flowerbed[i]==0 && flowerbed[i-1]==0 && flowerbed[i+1]==0){
                flowerbed[i]=1;
                av_ps++;
            }
        }
        if(av_ps>=n) return true;
        return false;
    }
};