class Solution:
    def minCostClimbingStairs(self, cost: List[int]) -> int:
        n=len(cost)
        dp=[0]*(n)
        la=0
        if cost[1] < cost[0] or n < 4:
            i=1
        else:
            i=0
        while i < n:
            la=la+cost[i]
            if i+2 < n:
                if cost[i+2] <= cost[i+1]:
                    i=i+2
                else:
                    i=i+1
            else:
                break
        return(la)

        