//
//  Created by Patrick-Lin on 15/11/27.
//  Copyright © 2015年 Patrick-Lin. All rights reserved.
//

/*

 Given a positive integer, return its corresponding column title as appear in an Excel sheet.
 
 For example:
 1 -> A
 2 -> B
 3 -> C
 ...
 26 -> Z
 27 -> AA
 28 -> AB

*/

class Solution {
public:
    string convertToTitle(int n) {
        string result="";
        while(n!=0){
            char ch=(n-1)%26+'A';
            result.insert(result.begin(),ch);
            n-=(n-1)%26;
            n/=26;
        }
        return result;
    }
};