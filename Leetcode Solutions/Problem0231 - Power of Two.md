# Power of Two

## Description
Given an integer n, return true if it is a power of two. Otherwise, return false.
An integer n is a power of two, if there exists an integer x such that n == 2x.
<br>Difficuity : Easy
<br>Topics: Math, Recursion, Bit Manipulation
<br>[Question link](https://leetcode.com/problems/power-of-two/description/)

## Solution
Here is my solution in cpp. There is pretty much approaches, but I solve it using recursion
<br>Time complexity is O(log n)
```C++
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n == 1) return true;
        if(n % 2 != 0 || n <= 0) return false;
        return isPowerOfTwo(n/2);
    }
};
```
