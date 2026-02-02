class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        n = len(nums)
        dp = [0 for _ in range(n)]
        dp[0] = (nums[0],nums[0])
        for i in range(1,n):
            dp[i] = (max(dp[i-1][0]*nums[i],dp[i-1][1]*nums[i],nums[i]),
                        min(dp[i-1][0]*nums[i],dp[i-1][1]*nums[i],nums[i]))
        return max(dp[i][0] for i in range(n))