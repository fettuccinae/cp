class Solution:
    def leastInterval(self, tasks: List[str], n: int) -> int:
        x = Counter(tasks)
        heap = [-cnt for cnt in x.values()]
        heapq.heapify(heap)
        queue = deque()
        time = 0
        while heap or queue:
            time+=1
            if heap:
                cunt = 1+heapq.heappop(heap)
                if cunt !=0:
                    queue.append([cunt,(time+n)])
            if queue and queue[0][1] == time:
                heapq.heappush(heap,queue.popleft()[0])
        return time


        