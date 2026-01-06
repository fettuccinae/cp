class Solution:
    def largestRectangleArea(self, heights: List[int]) -> int:

        res = 0
        for i in heights:
            new = []
            for j in heights:
                if j<i:
                    new = []
                else:
                    new.append(j)
                res = max(res,(i*len(new)))
        return(res)
        