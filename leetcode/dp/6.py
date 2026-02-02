class Solution:
    def countSubstrings(self, s: str) -> int:
        count = 0
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
        for i in range(n):
            for j in range(n-1,i-1,-1):
                if dp(i,j):
                    count+=1
        return count
            
        