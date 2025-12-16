class Solution:
    def combinationSum2(self, candidates: List[int], target: int) -> List[List[int]]:
        res = set()

        def cum(nums,index,subset):
            if sum(subset) == target:
                subset.sort()
                res.add(tuple(subset.copy()))
                return
            for i in range(index,len(nums)):
                subset.append(nums[i])
                cum(nums,i+1,subset)
                subset.pop()
        cum(candidates,0,[])
        
        pesto = [list(p) for p in res]
        return (pesto)
