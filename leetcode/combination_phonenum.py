class Solution:
    def letterCombinations(self, digits: str) -> List[str]:
        res = []
        nums = {
            "2":"abc",
            "3":"def",
            "4":"ghi",
            "5":"jkl",
            "6":"mno",
            "7":"pqrs",
            "8":"tuv",
            "9":"wxyz"

        }
        if not digits:
            return []
        def recur(i,subset):
            if len(subset) == len(digits):
                s = ''.join(subset)
                res.append(s)
                return

            for j in range(len(nums[digits[i]])):
                subset.append(nums[digits[i]][j])
                recur(i+1,subset)
                subset.pop()
        recur(0,[])

        return res
