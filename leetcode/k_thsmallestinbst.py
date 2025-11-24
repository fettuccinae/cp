# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def kthSmallest(self, root: Optional[TreeNode], k: int) -> int:
        self.counter = 0
        self.k = k
        self.res = -1

        def dfs(node):
            if not node:
                return 0
            left = dfs(node.left)
            self.counter+=1
            if self.k == self.counter:
                self.res = node.val
                return False
            right = dfs(node.right)
            if left is False or right is False:
                return False
        dfs(root)
        return self.res


