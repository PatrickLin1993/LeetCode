###Add Digits
***
Given a non-negative integer num, repeatedly add all its digits until the result has only one digit.

For example:<br>
Given num = 38, the process is like: 3 + 8 = 11, 1 + 1 = 2. Since 2 has only one digit, return it.

Follow up:<br>
Could you do it without any loop/recursion in O(1) runtime?
***

###solution:

####先计算，看是否有规律：

Number|1|2|3|4|5|6|7|8|9
------|---|---|---|---|----|----|----|---|---
Digit Root|1|2|3|4|5|6|7|8|9

Number|10|11|12|13|14|15|16|17|18
------|---|---|---|---|---|---|---|---|---
|Digit Root|1|2|3|4|5|6|7|8|9


Number|19|20|21|22|23|24|25|26|27
------|---|---|---|---|---|---|---|---|---
Digit Root|1|2|3|4|5|6|7|8|9

####不难发现:<br>

```
Number 以 9 为周期，分别得到 1-9 的 Digit Root。
```

####根据规律得计算公式:

>当 num = 0 -> digit root = 0 <br>
 当 num % 9 = 0 -> digit root = 9<br>
 否则 digit root = num % 9

***

####关于Add Digit 更详细内容：<br>

[wikipedia](https://en.wikipedia.org/wiki/Digital_root)

<https://en.wikipedia.org/wiki/Digital_root>
