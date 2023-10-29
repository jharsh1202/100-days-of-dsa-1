'''
    Following is the structure of Tree Node

    class TreeNode:

        def __init__(self, val):
            self.val = val
            self.left = None
            self.right = None
'''
from typing import List


def levelOrder(root) -> List[int]:
    queue = [root]
    res = []
    while(queue):
        r=queue.pop(0)
        if r != None:
            queue.append(r.left)
            queue.append(r.right)
            res.append(r.data)
    return res