//
//  Created by Patrick-Lin on 15/11/26.
//  Copyright © 2015年 Patrick-Lin. All rights reserved.
//

/*
 
 Valid Anagram
 
 Given two strings s and t, write a function to determine if t is an anagram of s.
 
 For example,
 s = "anagram", t = "nagaram", return true.
 s = "rat", t = "car", return false.
 
 Note:
 You may assume the string contains only lowercase alphabets.
 
 Follow up:
 What if the inputs contain unicode characters? How would you adapt your solution to such case?
 
 */

// Solution 1
class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s==t;
};

// Solution 2
class Solution {
public:
    bool isAnagram(string s, string t) {
        int alphabet[26]={0};
        
        for(int i=0;i<s.size();i++){
            alphabet[s[i]-'a']++;
        }
        
        for(int i=0;i<t.size();i++){
            alphabet[t[i]-'a']--;
        }
        
        for(int i=0;i<sizeof(alphabet)/sizeof(alphabet[0]);i++){
            if(alphabet[i]!=0)
                return false;
        }
};