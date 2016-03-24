###Delete Node in a Linked List
***
Write a function to delete a node (except the tail) in a singly linked list, given only access to that node.

Supposed the linked list is 1 -> 2 -> 3 -> 4 and you are given the third node with value 3, the linked list should become 1 -> 2 -> 4 after calling your function.
***

###solution:

```
  1 -> 2 -> 3 -> 4 -> nullptr
            ↓____________↑
```

>因为所给节点非尾节点，故我们可以将所给节点的值设置为下一个节点的值，将所给节点的链接连接到下一个节点的链接，然后删除下一个节点。
