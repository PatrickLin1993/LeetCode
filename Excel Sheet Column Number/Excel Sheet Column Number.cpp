//
//  Created by Patrick-Lin on 15/11/27.
//  Copyright © 2015年 Patrick-Lin. All rights reserved.
//

/*
 
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
 
 */

class Solution {
public:
    int titleToNumber(string s) {
        int result=0;
        for(auto c:s){
            result=result*26+c-'A'+1;
        }
        return result;
    }
};