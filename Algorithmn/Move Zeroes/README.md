###Move Zeroes
***
 Write a function to delete a node (except the tail) in a singly linked list, given 
 only access to that node.
 
 Supposed the linked list is 1 -> 2 -> 3 -> 4 and you are given the third node with 
 value 3, the linked list should become 1 -> 2 -> 4 after 
 calling your function.
***

###solution:

>根据选择排序算法的思路，遍历数字过程中，将非零数逐个往前移动。

计算过程：<br>

1 -> 0 -> 0 -> 2 -> 0 -> 3 -> 4 -> 0 -> 0

```
a)  1 -> 0 -> 0 -> 2 -> 0 -> 3 -> 4 -> 0 -> 0 
b)  1 -> 2 -> 0 -> 0 -> 0 -> 3 -> 4 -> 0 -> 0
c)  1 -> 2 -> 3 -> 0 -> 0 -> 0 -> 4 -> 0 -> 0
d)  1 -> 2 -> 3 -> 4 -> 0 -> 0 -> 0 -> 0 -> 0
```
