class Solution:
    def numDecodings(self, s: str) -> int:
        hashmap = {}
        n = len(s)
        for i in range(1, 27):
            hashmap[str(i)] = chr(96 + i)
        mem = [-1 for _ in range(n)]

        def dfs(i):
            if i > n:
                return 0
            if i == n:
                return 1
            if s[i] not in hashmap:
                return 0
            
            if mem[i] != -1:
                return mem[i]
            mem[i] = dfs(i+1) + (dfs(i+2) if i < n-1 and (s[i]+s[i+1]) in hashmap else 0)
            return mem[i]
        return dfs(0)