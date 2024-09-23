# Valid Perfect Square

## Description
Given a positive integer num, return true if num is a perfect square or false otherwise.
A perfect square is an integer that is the square of an integer. In other words, it is the product of some integer with itself.
You must not use any built-in library function, such as sqrt.
<br>Difficuity : Easy
<br>Topics: Math, Binary Search
<br>[Question link](https://leetcode.com/problems/valid-perfect-square/description/)
## Solution
Here is my solution in c
<br>Time complexity is O(log(n))
```C
bool isPerfectSquare(int num) {
    int left = 0, right = num;
    while(left <= right)
    {
        long long mid = (right - left) / 2 + left;
        if(mid * mid == num) return true;
        else if(mid * mid < num) left = mid + 1;
        else right = mid - 1;
    }
    return false;
}
```
