# Minimum Size Subarray Sum

## Description
Given an array of positive integers nums and a positive integer target, return the minimal length of a subarray 
whose sum is greater than or equal to target. If there is no such subarray, return 0 instead.
<br>Difficuity : Medium
<br>Topics: Array, Binary Search, Sliding Window, Prefix Sum
<br>[Question link](https://leetcode.com/problems/minimum-size-subarray-sum/)

## Solution
Here is my solution in c
<br>Time complexity is O(n)
```C
int minSubArrayLen(int target, int* nums, int numsSize) {
    int left = 0, sum = 0, min_len = numsSize + 1;
    for(int right=0; right<numsSize; right++)
    {
        sum = sum + nums[right];
        while(sum >= target)
        {
            int cur_len = right - left + 1;
            if(cur_len < min_len) min_len = cur_len;
            sum = sum - nums[left];
            left++;
        }
    }
    if(min_len == numsSize + 1) return 0;
    else return min_len;
}
```
