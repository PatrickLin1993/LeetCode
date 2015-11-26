//
//  Created by Patrick-Lin on 15/11/26.
//  Copyright © 2015年 Patrick-Lin. All rights reserved.
//

/*
 
 Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.
 
 For example, given nums = [0, 1, 0, 3, 12], after calling your function, nums should be [1, 3, 12, 0, 0].
 
 Note:
 You must do this in-place without making a copy of the array.
 Minimize the total number of operations.
 
 */

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int non_zero_position=0;
        
        for (int i=0; i<nums.size(); i++) {
            if (nums[i]==0)
                continue;
            else{
                nums[non_zero_position]=nums[i];
                if (i!=non_zero_position++) {
                    nums[i]=0;
                }
            }
        }
    }
};