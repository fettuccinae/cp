class Solution:
    def rob(self, nums: List[int]) -> int:
        n=len(nums)
        memo=[-1 for _ in range(n)]
        def dp(i):
            if i>=n:
                return 0
            if memo[i]!=-1:
                return memo[i]
            memo[i]=max(dp(i+1),nums[i]+dp(i+2))
            return memo[i]
        return dp(0)
            
        