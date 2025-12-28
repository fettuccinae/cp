class Solution:
    def maxSlidingWindow(self, nums: List[int], k: int) -> List[int]:
        i,res = 0,[]
        j = i+k
        while j <= len(nums):
            res.append(max(nums[i:j]))
            j+=1
            i+=1
        return (res)











 
 