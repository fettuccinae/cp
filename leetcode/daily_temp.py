class Solution:
    def dailyTemperatures(self, temperatures: List[int]) -> List[int]:
        stack = []
        result = []
        for num,i in enumerate(temperatures):
            j = num+1
            stack.append(i)
            while j < len(temperatures):
                if temperatures[j] <= i:
                    stack.append(temperatures[j])
                    j = j+1
                else:
                    result.append(len(stack))
                    stack=[]
                    break
            if len(stack) != 0:
                result.append(0)
                stack=[]
        return(result)



        