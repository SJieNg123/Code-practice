# Maximum Subarray

## Description
Given an integer array nums, find the subarray with the largest sum, and return its sum.
<br>Difficuity : Medium
<br>Topics: Array, Divide and Conquer, Dynamic Programming
<br>[Question link](https://leetcode.com/problems/maximum-subarray/description/)
## Solution
Here is my solution in c
<br>Time complexity is O(n)
```C
int maxSubArray(int* nums, int numsSize) {
    int current_max = nums[0];
    int global_max = nums[0];
    for(int i=1; i<numsSize; i++)
    {
        if(current_max + nums[i] > nums[i]) current_max += nums[i];
        else current_max = nums[i];

        if(current_max > global_max) global_max = current_max; 
    }
    return global_max;
}
```
