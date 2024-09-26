# Pow(x, n)
## Description
Implement pow(x, n), which calculates x raised to the power n (i.e., x^n).
<br>Difficuity : Medium
<br>Topics: Math, Recursion
<br>[Question link](https://leetcode.com/problems/powx-n/)

## Solution
Here is my solution in c
<br>Time complexity is O(log(n))
```C
// since it only requires us to implement pow(x, n), so just do it
double myPow(double x, int n) {
    return pow(x, n);
}
```