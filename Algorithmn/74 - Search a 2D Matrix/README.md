##74. Search a 2D Matrix

Write an efficient algorithm that searches for a value in an m x n matrix. This matrix has the following properties:

* Integers in each row are sorted from left to right.
* The first integer of each row is greater than the last integer of the previous row.

For example,

Consider the following matrix:

```
[
  [1,   3,  5,  7],
  [10, 11, 16, 20],
  [23, 30, 34, 50]
]
```

Given **target** = `3`, return `true`.

##Solution

二分法。

```
bool searchMatrix(vector<vector<int>>& matrix, int target) {
    if (matrix.size() == 0 || matrix[0].size() == 0){
		return false;
	}
	int r = matrix.size(), c = matrix[0].size();
	int left = 0, right = r * c - 1;
	while (left + 1 < right){
		int mid = left + (right - left) / 2;
		int tmp = matrix[mid / c][mid % c];
		if (tmp == target){
			return true;
		}
		else if (tmp < target){
			left = mid;
		}
		else {
			right = mid;
		}
	}
	return  matrix[left / c][left % c] == target || matrix[right / c][right % c] == target;
}
```