###Excel Sheet Column Number
***
 Related to question Excel Sheet Column Title
 
 Given a column title as appear in an Excel sheet, return its corresponding column number.
 
 For example:
 
	 A -> 1
	 B -> 2
	 C -> 3
	 ...
	 Z -> 26
	 AA -> 27
	 AB -> 28
	 
***

###solution:

>截取字符串中的每个字符，根据其所在位置进行计算。

例如

```
"CBA" 中 
'C' 的值为 ('C'-'A'+1)*26*26 
'B' 的值为 ('B'-'A'+1)*26
'A' 的值为 ('A'-'A'+1)
```

***

####Excel Sheet Column Ttile:

[Excel Sheet Column Title](https://github.com/PatrickLin1993/LeetCode/tree/master/Excel%20Sheet%20Column%20Tile)