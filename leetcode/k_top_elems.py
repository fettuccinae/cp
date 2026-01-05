class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        n = []
        counter = []
        op = []
        # for n
        for i in nums:
            if i not in n:
                n.append(i)
        # for counter
        for i in n:
            count = 0
            for j in nums:
                if i == j:
                    count+=1
            counter.append(count)
        
        #k frequency
        rc = sorted(counter, reverse=True)
        
        for i in range(k):
            for j in range(len(counter)):
                if rc[i] == counter[j]:
                    op.append(n[j])
        
        return list(set(op))
        



        