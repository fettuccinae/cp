class Solution:
    def permute(self, nums: List[int]) -> List[List[int]]:
        res = []
        subset = []
        wall = [False for _ in range(len(nums))]
        def backTrack(nums,wall,subset):
            if len(subset) == len(nums):
                res.append(subset.copy())
                return
            for i in range(len(nums)):
                if not wall[i]:
                    subset.append(nums[i])
                    wall[i] = True
                    backTrack(nums,wall,subset)
                    wall[i] = False
                    subset.pop()
        backTrack(nums,wall,subset)
        return res