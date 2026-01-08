class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        l = 0

        res = 0
        while l < len(s):
            rah = []
            r = l
            while r < len(s):
                if s[r] in rah:
                    break
                else:
                    rah.append(s[r])
                    r+=1
                    res = max(res,len(rah))
            l+=1
        return res
