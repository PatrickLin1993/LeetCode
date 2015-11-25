//
//  Created by Patrick-Lin on 15/11/25.
//  Copyright © 2015年 Patrick-Lin. All rights reserved.
//

/*

 Given a non-negative integer num, repeatedly add all its digits until the result has only one digit.
 
 For example:
 Given num = 38, the process is like: 3 + 8 = 11, 1 + 1 = 2. Since 2 has only one digit, return it.
 
 Follow up:
 Could you do it without any loop/recursion in O(1) runtime?
 
*/

class Solution {
public:
    int addDigits(int num) {
        if(num==0)
            return 0;
        else
            return num%9==0?9:num%9;
    }
};