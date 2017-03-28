##35. Search Insert Position

Given a sorted array and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You may assume no duplicates in the array.

Here are few examples.
`[1,3,5,6]`, 5 → 2
`[1,3,5,6]`, 2 → 1
`[1,3,5,6]`, 7 → 4
`[1,3,5,6]`, 0 → 0

##Solution

```cpp
int searchInsert(vector<int>& nums, int target) {
	int size = nums.size();
	if (size == 0) {
		return -1;
	}
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
	return (nums[left] >= target ? left : (nums[right] >= target ? right : right + 1));
}
```