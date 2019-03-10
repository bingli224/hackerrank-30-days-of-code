import sys

class Node:
    def __init__(self,data):
        self.right=self.left=None
        self.data = data
class Solution:
    def insert(self,root,data):
        if root==None:
            return Node(data)
        else:
            if data<=root.data:
                cur=self.insert(root.left,data)
                root.left=cur
            else:
                cur=self.insert(root.right,data)
                root.right=cur
        return root

    def levelOrder(self,root):
        #Write your code here
        ## By BingLi224
        ## 13:13 THA 10/03/2019
        r = root;
        child = [ ];
        if r is not None :
            child.append ( root )
            while len ( child ) > 0 :
                r = child.pop ( 0 )
                print ( r.data, end = ' ' )
                if r.left is not None:
                    child.append ( r.left )
                if r.right is not None:
                    child.append ( r.right )

T=int(input())
myTree=Solution()
root=None
for i in range(T):
    data=int(input())
    root=myTree.insert(root,data)
myTree.levelOrder(root)

