# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def goodNodes(self, root: TreeNode) -> int:

        self.res = 0

        def dfs(node,mV):
            
            if not node:
                return 0

            self.res += 1 if node.val >= mV else 0
            mV = max(mV,node.val)
            dfs(node.left,mV)
            dfs(node.right,mV)
        dfs(root,root.val)
        return self.res




        