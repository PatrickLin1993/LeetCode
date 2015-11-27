###Excel Sheet Column Title
***
Given a positive integer, return its corresponding column title as appear in an Excel sheet.

For example:

    1 -> A
    2 -> B
    3 -> C
    ...
    26 -> Z
    27 -> AA
    28 -> AB 
    
***

###solution:

>根据辗转相除得数值各个位上的值的思想

例如

```
"28" 中 
a)  (28 - 1) % 26 = 1 对应 'B'  －故字符串最后一位为'B'
b)  28 － 1 ＝ 27               －减去 'B' 对应的值
c)  27 / 26 = 1                －准备求字符串对应的下一位
d)  回步骤 a)                   -(1 - 1) % 26 = 1 对应 'A'

故：28 值对应为 "AB"
```

***

####Excel Sheet Column Number:

[Excel Sheet Column Number](https://github.com/PatrickLin1993/LeetCode/tree/master/Excel%20Sheet%20Column%20Number)