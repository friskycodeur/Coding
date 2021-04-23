// https://leetcode.com/problems/check-if-n-and-its-double-exist/submissions/

class Solution:
    def checkIfExist(self, arr: List[int]) -> bool:
        if(len(arr)) <2:
            return 0
        
        s=set()
        
        for ele in arr:
            if 2*ele in s:
                return True
            if ele not in s:
                s.add(ele)
                if(ele%2 ==0 and ele/2 in s and ele!=0):
                    return True
            
        return False