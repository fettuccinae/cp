class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        uni = []
        op = []       
        for i in strs:
            a = list(i)
            a.sort()
            if a not in uni:
                uni.append(a)
        
        for i in uni:
            opm = []
            for j in strs:
                b = list(j)
                b.sort()
                if i == b:
                    opm.append(j)
            op.append(opm)
        return(op)

