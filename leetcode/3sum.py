class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        res = []
        nums.sort()
        for i in range(len(nums)):
            target = -1*nums[i]
            l = i+1
            r = len(nums)-1
            while l < r:   
                if nums[l]+nums[r] < target:
                    l+=1
                elif nums[l]+nums[r]>target:
                    r-=1
                else:
                    a = sorted([nums[i],nums[l],nums[r]])
                    if a not in res:
                        res.append(a)
                    l += 1
                    r -= 1
                    
        return(res)
