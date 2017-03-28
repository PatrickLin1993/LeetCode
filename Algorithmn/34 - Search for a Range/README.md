##34. Search for a Range

Given an array of integers sorted in ascending order, find the starting and ending position of a given target value.

Your algorithm's runtime complexity must be in the order of O(log n).

If the target is not found in the array, return `[-1, -1]`.

For example,
Given `[5, 7, 7, 8, 8, 10]` and target value 8,
return `[3, 4]`.

##Solution

```cpp
vector<int> searchRange(vector<int>& nums, int target) {
    vector<int> res(2, -1);
	if (nums.size() == 0) {
		return res;
	}
	int size = nums.size();
	int left = 0, right = size - 1;
	while (left + 1 < right) {
		int mid = left + (right - left) / 2;
		if (nums[mid] < target) {
			left = mid;
		}
		else {
			right = mid;
		}
	}
	int start = (nums[left] == target ? left : (nums[right] == target ? right : -1));
	if (start == -1) {
		return res;
	}
	left = 0;
	right = size - 1;
	while (left + 1 < right) {
		int mid = left + (right - left) / 2;
		if (nums[mid] > target) {
			right = mid;
		}
		else {
			left = mid;
		}
	}
	int end = (nums[right] == target ? right : (nums[left] == target ? left : -1));
	res[0] = start;
	res[1] = end;
	return res;
}
```