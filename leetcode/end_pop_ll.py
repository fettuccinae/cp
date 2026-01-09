# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        old = None
        new = head
        for i in range(n):
                new = new.next
        while new:
            if old:
                old = old.next
            else:
                old = head
            new = new.next
        try:
            old.next = old.next.next
        except:
            head = head.next
        
        return head



            
        