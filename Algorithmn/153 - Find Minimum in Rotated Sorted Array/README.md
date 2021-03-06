##153. Find Minimum in Rotated Sorted Array

Suppose an array sorted in ascending order is rotated at some pivot unknown to you beforehand.

(i.e., `0 1 2 4 5 6 7` might become `4 5 6 7 0 1 2`).

Find the minimum element.

You may assume no duplicate exists in the array.

##Solution

如果 `nums[mid]` 比 `nums[right]` 小，那么 `最小值` 在 `mid` 左边, 相反则在右边。

>CPP

```cpp
int findMin(vector<int>& nums) {
    int size = nums.size();
	int left = 0, right = size - 1;
	while (left + 1 < right) {
		int mid = left + (right - left) / 2;
		if (nums[mid] < nums[right]) {
			right = mid;
		}
		else {
			left = mid;
		}
	}
	return nums[left] < nums[right] ? nums[left] : nums[right];
}
```

>JAVA

```java
public int findMin(int[] nums) {
	 int left = 0;
	 int right = nums.length - 1;
	 while(left + 1 < right){
		 int mid = left + (right - left) / 2;
		 if (nums[mid] < nums[right]){
			 right = mid;
		 }
		 else{
			 left = mid;
		 }
	 }
	 return nums[left] <= nums[right] ? nums[left] : nums[right];
}
```