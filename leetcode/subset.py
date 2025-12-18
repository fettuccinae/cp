class Solution:
    def subsets(self, nums: List[int]) -> List[List[int]]:
        index = 0
        percs = []
        subset = []
        def find(nums,index,subset):
            if index == len(nums):
                percs.append(subset.copy())
                return
            find(nums,index+1,subset)
            subset.append(nums[index])
            find(nums,index+1,subset)
            subset.pop()
        find(nums,index,subset)
        return percs