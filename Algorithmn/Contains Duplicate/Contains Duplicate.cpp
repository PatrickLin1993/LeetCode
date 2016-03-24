//
//  Created by Patrick-Lin on 15/12/4.
//  Copyright © 2015年 Patrick-Lin. All rights reserved.
//  Source : https://leetcode.com/problems/contains-duplicate/
//

/*
 
 Contains Duplicate
 
 Given an array of integers, find if the array contains any duplicates. Your function should return true if any value appears at least twice in the 
 array, and it should return false if every element is distinct.
 
*/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int record;
        for(auto i:nums){
            if(i==record)
                return true;
            record=i;
        }
        return false;
    }
};