class Solution:
    def maxArea(self, heights: List[int]) -> int:
        arr = 0
        for i in range(len(heights)):
            l, r = i, len(heights) - 1
            while l < r:
                arr = max(min(heights[l], heights[r]) * (r - l), arr)

                r -= 1
        return arr
