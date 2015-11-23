###Nim Game
***
You are playing the following Nim Game with your friend: There is a heap of stones on the table, each time
one of you take turns to remove 1 to 3 stones. The one who removes the last stone will be the winner. You
will take the first turn to remove the stones.

Both of you are very clever and have optimal strategies for the game. Write a function to determine whether 
you can win the game given the number of stones in the heap.

For example, if there are 4 stones in the heap, then you will never win the game: no matter 1, 2, or 3 
stones you remove, the last stone will always be removed by your friend.
***

###solution:
####1. 先看最简单的情况：

石头数|胜利者
-----|------
1-3|先手
4|后手

####2. 接下来进一步情况:<br>

>因为一次可以拿走1-3块石头，故当石头数量为5-7时，先手者总是可以将石头数化为4，如上表，自己作为后手而胜利。
当石头数量为8时,先手者不论拿走几块（1-3），石头剩余5-7。那么后手者就成为上诉情况的石头数为5-7的先手胜者。

石头数|胜利者
-----|------
5-7|先手
8|后手

####3. 规律总结:
>不论石头数为多少，都可以以4为周期，以多华少，变成上表的情况。

**当石头数为`4的倍数`时，后手获胜。<br>**
**当石头数非`4的倍数`时，先手胜利。**

***

####关于Nim Game 更多内容：<br>

<http://www.guokr.com/blog/777525/>
