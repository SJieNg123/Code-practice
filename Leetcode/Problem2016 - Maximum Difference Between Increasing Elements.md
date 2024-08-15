# Maximum Difference Between Increasing Elements
[question link](https://leetcode.com/problems/maximum-difference-between-increasing-elements/description/)

## Description
Given a 0-indexed integer array nums of size n, find the maximum difference between nums[i] and nums[j] (i.e., nums[j] - nums[i]), such that 0 <= i < j < n and nums[i] < nums[j]. Return the maximum difference. If no such i and j exists, return -1.
<br>Difficuity : Easy
<br>Topics: Array

## Solution
Here is my solution in c
<br>time complexity is O(n)
```C
int maximumDifference(int* nums, int numsSize) 
{
    if(numsSize < 2) return -1;
    int min = nums[0], max_dif = -1, dif = 0;
    for(int i=1; i< numsSize; i++)
    {
        if(nums[i] > min)
        {
            dif = nums[i] - min;
            if(dif > max_dif) max_dif = dif;
        }
        if(nums[i] < min) min = nums[i];
    }
    return max_dif;
}
```
[solution link](https://github.com/SJieNg123/Code-practice/blob/main/Leetcode/Problem2016%20-%20Maximum%20Difference%20Between%20Increasing%20Elements.c)
Problem2016 - Maximum Difference Between Increasing Elements.md
