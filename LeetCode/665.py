class Solution:
    def checkPossibility(self, nums: List[int]) -> bool:
        cnt=False
        for i in range(1,len(nums)):
            if(nums[i]<nums[i-1]):
                if cnt:
                    return False
                else:
                    cnt=True
                    if i-2>=0 and nums[i-2]>nums[i]:
                        nums[i]=nums[i-1]
        return True