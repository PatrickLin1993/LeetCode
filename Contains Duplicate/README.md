###Contains Duplicate
***
Given an array of integers, find if the array contains any duplicates. Your function should return true if any value appears at least twice in the array, and it should return false if every element is distinct.
***

###solution:

方法略多，其中可以如下方法：
>将传进的数值排序，比较下一数值，若一样则返回 true, 若到结尾还没发现一样的数值，则返回 false。