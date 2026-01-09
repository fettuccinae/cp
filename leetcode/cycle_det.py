# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:
        cry = head
        dic = {}
        while cry:
            if cry in dic:
                return True
            else:
                dic[cry] = cry.val
            cry = cry.next
        return False



        