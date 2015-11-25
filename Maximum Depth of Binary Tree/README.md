###Maximum Depth of Binary Tree
***
Given a binary tree, find its maximum depth.

The maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.
***

###solution:

根据二叉树的性质，我们可以运用递归思维，以如下规则，遍历二叉树的所有节点，从而得到二叉树的深度。

```
a) 节点为空，返回0值。
b) 节点无左右子女，返回1值。
c) 节点具有左子女，遍历左节点，递归计算left的子树的深度。
d) 节点具有右子女，遍历右节点，递归计算right的子树的深度。
e) 比较左右节点子树的深度，返回深度高者。

```