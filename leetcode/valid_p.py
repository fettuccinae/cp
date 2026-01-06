class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        mapp = {')':'(','}':'{',']':'['}
        for i in s:
            if i not in mapp:
                stack.append(i)
            elif not stack or stack[-1] != mapp[i]:
                return False
            else:
                stack.pop()
            
        return not stack

        
        
        