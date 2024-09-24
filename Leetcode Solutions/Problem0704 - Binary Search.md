# Binary Search

## Description
Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. 
If target exists, then return its index. Otherwise, return -1.
You must write an algorithm with O(log n) runtime complexity.
<br>Difficuity : Easy
<br>Topics: Array, Binary Search
<br>[Question link](https://leetcode.com/problems/binary-search/description/)

## Solution
Here is my solution in c
<br>Time complexity is O(log(n))
```C
int search(int* nums, int numsSize, int target) {
    int left = 0, right = numsSize - 1;
    while(left <= right)
    {
        int mid = (right - left) / 2 + left;
        if(nums[mid] == target) return mid;
        else if(nums[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}
```
