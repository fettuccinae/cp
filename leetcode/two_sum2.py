class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        a = numbers
        for i in range(len(numbers)):
            l = i
            r = len(numbers)-1
            while l < r:
                if a[l] + a[r] == target:
                    return ([l+1,r+1])
                    break
                elif a[l] + a[r] < target:
                    l = l+1
                
                elif a[l] + a[r] > target:
                    r = r-1
                
        