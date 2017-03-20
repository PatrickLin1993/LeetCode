##69. Sqrt(x)

Implement `int sqrt(int x)`.

Compute and return the square root of x.

##Solution

二分法。

```
int mySqrt(int x) {
	long long int left = 0, right = x, res;
	while (left <= right){
		long long int middle = left + (right - left) / 2, square = middle * middle;
		if (square == x)
			return middle;
		else if (square < x){
			res = middle;
			left = middle + 1;
		}
		else
			right = middle - 1;
	}
	return res;
}
```