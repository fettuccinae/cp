class Solution:
    def uniquePaths(self, m: int, n: int) -> int:
        mem = [[0 for _ in range(n)]for _ in range(m)]

        def dp(i,j):

            if (i,j) == (m-1, n-1):
                return 1
            if ( i >= m or j >= n or i < 0 or j < 0):
                return 0
            if (mem[i][j] != 0):
                return mem[i][j]
            if dp(i+1,j):
                mem[i][j]+=dp(i+1,j)
            if dp(i,j+1):
                mem[i][j]+=dp(i,j+1)
            return mem[i][j]
        return dp(0,0)

            
        