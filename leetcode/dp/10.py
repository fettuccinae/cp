class Solution:
    def wordBreak(self, s: str, wordDict: List[str]) -> bool:
        n = len(s)
        memo = {n:True}
        def dp(i):
            if i in memo:
                return memo[i]
            for w in wordDict:
                if (i + len(w) <= n and (s[i: i + len(w)] == w)):
                    if (dp(i+len(w))):
                        memo[i] = True
                        return True
            memo[i] = False
            return memo[i]
        return dp(0)
        