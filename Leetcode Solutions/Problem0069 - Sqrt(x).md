# Sqrt(x)

## Description
Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.
You must not use any built-in exponent function or operator.
For example, do not use pow(x, 0.5) in c++ or x ** 0.5 in python.
<br>Difficuity : Easy
<br>Topics: Math, Binary Search
<br>[Question link](https://leetcode.com/problems/sqrtx/description/)
## Solution
Here is my solution in c
<br>Time complexity is O(log(n))
```C
int mySqrt(int x) {
    int ans = 0, left = 1, right = x;
    while(left <= right)
    {
        long mid = (right - left) / 2 + left;
        if(mid * mid == x) return mid;
        else if(mid * mid < x)
        {
            left = mid + 1;
            ans = mid;
        }
        else right = mid - 1;
    }
    return ans;
}
```
