class Solution:
    def climbStairs(self, n: int) -> int:
        dp=[0]*(n+1)
        stairs=(1,2)
        for i in range (1,n+1):
            for s in stairs:
                if i>=s:
                    dp[i]=dp[i] + dp[i-s]
                    if i-s == 0:
                        dp[i]+=1
            
        
        return dp[n]
        
        