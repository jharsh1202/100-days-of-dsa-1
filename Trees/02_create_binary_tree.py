#TODO: REDO

# Time Complexity: O(n), where n is the total number of nodes in the tree. 

# Space Complexity: O(n) for calling recursion using stack.

# Create Binary Tree https://www.codingninjas.com/studio/problems/create-binary-tree_8360671?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0
from typing import List
class Node:
    def __init__(self, data=0, left=None, right=None):
        self.data = data
        self.left = left
        self.right = right

def insertNode(arr, i, n):
    root=None
    if i < n:
        root = Node(arr[i]) 
        root.left = insertNode(arr, 2 * i + 1, n)
        root.right = insertNode(arr, 2 * i + 2, n)
    return root
    

def createTree(arr: List[int]) -> Node:
    if not arr: return None 
    return insertNode(arr, 0, len(arr))
    
