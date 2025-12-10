class Solution:
    def orangesRotting(self, grid: List[List[int]]) -> int:

        queue = deque()
        vi = set()
        ones = 0
        twos = 0
        l = 0
        for i in range(len(grid)):
            for j in range(len(grid[i])):
                if grid[i][j] == 2:
                    queue.append((i,j,l))
                    vi.add((i,j))
                    twos+=1
                if grid[i][j] == 1:
                    ones+=1

        while queue:
            r,c,l = queue.popleft()
            for dr,dc in ((0,-1),(0,1),(1,0),(-1,0)):   
                if 0<= r+dr < len(grid) and 0<= c+dc < len(grid[r+dr]) and grid[r+dr][c+dc] not in (0,2) and (r+dr,c+dc) not in vi:

                    queue.append((r+dr,c+dc,l+1))
                    grid[r+dr][c+dc] = 2
                    vi.add((r+dr,c+dc))
        

        if len(vi) != (ones+twos):
            return -1 
        return l
                        



        