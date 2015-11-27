//
//  Created by Patrick-Lin on 15/11/27.
//  Copyright © 2015年 Patrick-Lin. All rights reserved.
//

/*

 Majority Element
 
 Given an array of size n, find the majority element. The majority element is the element that appears more than ⌊ n/2 ⌋ times.
 
 You may assume that the array is non-empty and the majority element always exist in the array.
 
*/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majority,count=0;
        for(auto i:nums){
            if(count==0){
                majority=i;
                count++;
            }
            else{
                majority==i?count++:count--;
                if(count>nums.size()/2)
                    return majority;
            }
        }
        return majority;
    }
};