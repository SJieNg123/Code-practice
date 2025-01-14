# Find First and Last Position of Element in Sorted Array

## Description
Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.
If target is not found in the array, return [-1, -1].
You must write an algorithm with O(log n) runtime complexity.
<br>Difficuity : Medium
<br>Topics: Array, Binary Search
<br>[Question link](https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/?envType=problem-list-v2&envId=binary-search)
## Solution
Here is my solution in c
<br>Time complexity is O(log n)
```C
int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
    int* result = malloc(sizeof(int) * 2);
    *returnSize = 2;

    int findPosition(int leftBias) 
    {
        int left = 0, right = numsSize - 1, mid;
        int position = -1;

        while (left <= right) 
        {
            mid = left + (right - left) / 2;
            if (nums[mid] == target) 
            {
                position = mid;
                // Adjust search range based on leftBias:
                if (leftBias) right = mid - 1; // Look for the first occurrence
                else left = mid + 1; // Look for the last occurrence
            } 
            else if (nums[mid] < target) left = mid + 1;
            else right = mid - 1;
        }
        return position;
    }
    int first = findPosition(1);
    int last = findPosition(0);
    result[0] = first;
    result[1] = last;

    return result;
}
```
