class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        s1 = list(s1)
        s1.sort()
        l = 0
        r = l+len(s1)-1
        while r < len(s2):
            chk = []
            for i in range(l,r+1):
                chk.append(s2[i])
            chk.sort()
            if chk == s1:
                return True
            l +=1
            r +=1
        return False




        