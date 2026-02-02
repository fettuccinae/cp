class Solution:
    def longestPalindrome(self, s: str) -> str:
        maxx = [0,[0,0]]
        n = len(s)
        mem = [[-1 for _ in range(n)] for _ in range(n)]
        def dp(i,j):
            if i == j:
                return 1
            if i > j:
                return 0
            if s[i] == s[j]:
                if mem[i][j] != -1:
                    return mem[i][j]
                mem[i][j] = dp(i+1,j-1) + 2 if dp(i+1,j-1) == j-i-1 else 0
                return mem[i][j]
            return 0
        for i in range(n):
            for j in range(n-1,i-1,-1):
                if dp(i,j) > maxx[0]:
                    maxx[0] = dp(i,j)
                    maxx[1] = [i,j]
        return s[maxx[1][0]:maxx[1][1]+1]
        