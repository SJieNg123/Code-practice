# Remove Duplicates from Sorted Array

## Description
Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. 
The relative order of the elements should be kept the same. Then return the number of unique elements in nums.
Consider the number of unique elements of nums to be k, to get accepted, you need to do the following things:
- Change the array nums such that the first k elements of nums contain the unique elements in the order they were present in nums initially. The remaining elements of nums are not important as well as the size of nums.
- Return k.

<br>Difficuity : Easy
<br>Topics: Array, Two Pointers
<br>[Question link](https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/)
## Solution
Here is my solution in c
<br>Time complexity is O(n)
```C
int removeDuplicates(int* nums, int numsSize) {
    if(numsSize == 0) return 0;
    int count = 1;
    for(int i=1; i<numsSize; i++)
    {
        if(nums[i] != nums[count - 1]) nums[count++] = nums[i];
    }
    return count;
}
```
