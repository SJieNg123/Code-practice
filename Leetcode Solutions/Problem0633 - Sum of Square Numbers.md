# Sum of Square Numbers

## Description
Given a non-negative integer c, decide whether there're two integers a and b such that a^2 + b^2 = c
<br>Difficuity : Medium
<br>Topics: Math, Two Pointers, Binary Search
<br>[Question link](https://leetcode.com/problems/sum-of-square-numbers/)

## Solution
Here is my solution in c
<br>Time complexity is O(log(n))
```C
bool judgeSquareSum(int c) {
    int left = 0, right = sqrt(c);
    while(left <= right)
    {
        long sum = pow(left , 2) + pow(right, 2);
        if(sum == c) return true;
        else if(sum < c) left++;
        else right--;
    }
    return false;
}
```
