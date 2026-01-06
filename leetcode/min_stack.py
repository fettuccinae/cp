class MinStack:

    def __init__(self):
        self.t = -1
        self.stack = []
        

    def push(self, val: int) -> None:
        self.stack.append(val)
        self.t +=1
        
    def pop(self) -> None:
        self.stack.pop()
        self.t -=1 

    def top(self) -> int:
        return self.stack[self.t]
        

    def getMin(self) -> int:
        a = sorted(self.stack)
        return a[0]
        
