###Valid Anagram
***
 Given two strings s and t, write a function to determine if t is an anagram of s.
 
 For example,<br>
 s = "anagram", t = "nagaram", return true.<br>
 s = "rat", t = "car", return false.
 
 Note:<br>
 You may assume the string contains only lowercase alphabets.
 
 Follow up:<br>
 What if the inputs contain unicode characters? How would you adapt your solution 
 to such case?
***

###solution:

#####solution 1
>将两个字符串的字母进行排序，比较排序后两个字符串是否相等。

#####solution 2
>建立字母个数统计表，统计两个字符串的字母，看两个统计表是否一致。