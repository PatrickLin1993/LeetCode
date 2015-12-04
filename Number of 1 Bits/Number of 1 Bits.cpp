//
//  Created by Patrick-Lin on 15/12/4.
//  Copyright © 2015年 Patrick-Lin. All rights reserved.
//  Source: https://leetcode.com/problems/number-of-1-bits/
//

/*

 Number of 1 Bits
 
 Write a function that takes an unsigned integer and returns the number of ’1' bits it has (also known as the Hamming weight).
 
 For example, the 32-bit integer ’11' has binary representation 00000000000000000000000000001011, so the function should return 3.
 
*/

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count=0;
        while(n>0){
            if(n&1==1)
                count++;
            n=n>>1;
        }
        return count;
    }
};