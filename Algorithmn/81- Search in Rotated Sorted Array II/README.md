##81. Search in Rotated Sorted Array II

>Follow up for "Search in Rotated Sorted Array":
What if duplicates are allowed?
>
>Would this affect the run-time complexity? How and why?

Suppose an array sorted in ascending order is rotated at some pivot unknown to you beforehand.

(i.e., `0 1 2 4 5 6 7` might become `4 5 6 7 0 1 2`).

Write a function to determine if a given target is in the array.

The array may contain duplicates.

##Solution

二分搜索，最坏情况退化 O(n)
```cpp
bool search(vector<int>& nums, int target) {
	if (nums.size() <= 0){
		return false;
	}
	int low = 0, high = nums.size() - 1;
	while (low < high){
		int middle = low + (high - low) / 2;
		if (nums[middle] == target){
			return true;
		}
		if (nums[low] < nums[middle]){
			if (target >= nums[low] && target <= nums[middle])
				high = middle - 1;
			else
				low = middle + 1;
		}
		else if (nums[middle] < nums[high]){
			if (target >= nums[middle] && target <= nums[high])
				low = middle + 1;
			else
				high = middle - 1;
		}
		else{
			if (nums[low] == nums[middle])
				low++;
			if (nums[high] == nums[middle])
				high--;
		}
	}
	return nums[low] == target ? true : false;
}
```