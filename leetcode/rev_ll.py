# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        
        if not head:
            return head
        pre,cur,nxt = None,head,head.next
        while nxt != None:
            cur.next = pre
            pre = cur
            cur = nxt
            nxt = nxt.next
        if not nxt:
            cur.next = pre
            head = cur 
        
        return head

        