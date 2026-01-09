"""
# Definition for a Node.
class Node:
    def __init__(self, x: int, next: 'Node' = None, random: 'Node' = None):
        self.val = int(x)
        self.next = next
        self.random = random
"""

class Solution:
    def copyRandomList(self, head: 'Optional[Node]') -> 'Optional[Node]':
        cheat = {None:None}
        curr = head
        while curr:
            new = Node(curr.val)
            cheat[curr] = new
            curr = curr.next
        curr = head
        while curr:
            dope = cheat[curr]
            dope.next = cheat[curr.next]
            dope.random=cheat[curr.random]
            dope = dope.next
            curr = curr.next
        return cheat[head]


         

        