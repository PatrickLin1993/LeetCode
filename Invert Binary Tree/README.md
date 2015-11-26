###Delete Node in a Linked List
***
 Invert a binary tree.
 
        4
       / \
      2   7
     / \ / \
    1  3 6  9
       
       to
 
        4
       / \
      7   2
     / \ / \
    9  6 3  1
 
 
Trivia:<br>
This problem was inspired by this original tweet by Max Howell:
>Google: 90% of our engineers use the software you wrote (Homebrew), but you can’t invert a binary tree on a whiteboard so fuck off.

***

###solution:

>遍历树的每一个节点，将节点的左右子女互换。即可完成树的左右翻转。

计算过程如下：<br>
#####1. 调换根节点的左右子女

```
        4
       / \
      7   2
     / \ / \
    6  9 1  3
```

#####2. 调换第一层节点的子女

```
        4
       / \
      7   2
     / \ / \
    9  6 3  1
```
#####3. 继续向下一层子女遍历并调换其子女
***

###关于 Max Howell 被 Google 拒更多内容：

<http://www.pingwest.com/sorry-cant-hire-you/>

以及网友的讨论：<br>

<http://cn.v2ex.com/t/198594>