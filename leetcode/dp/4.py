class Solution:
    def rob(self, nums: List[int]) -> int:
        n = len(nums)
        first = False
        mem=[[-1 for _ in range(2)] for _ in range(len(nums))]

        def dp(i,first):
            if i>=n:
                return 0
            if i == n-1 and first:
                return 0
            if mem[i][first] != -1:
                return mem[i][first]
            mem[i][first] = max(dp(i+1,first),nums[i]+dp(i+2,first or i==0))
            return mem[i][first]
        
        return dp(0,False)
        