###Majority Element
***
Given an array of size n, find the majority element. The majority element is the element that appears more than [ n/2 ] times.

You may assume that the array is non-empty and the majority element always exist in the array.
***

###solution:

>因为主元素大于总元素的一半，那么可以建立一个统计变量，遇见异者就减，遇见同者就加。
>
>最后统计变量对应的值就是 Majority
