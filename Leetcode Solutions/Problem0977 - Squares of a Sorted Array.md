# Squares of a Sorted Array

## Description
Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.
<br>Difficuity : Easy
<br>Topics: Array, Two Pointers, Sorting
<br>[Question link](https://leetcode.com/problems/squares-of-a-sorted-array/description/)

## Solution
Here is my solution in c
<br>Time complexity is O(nlog(n))
```C
int cmp(const void* a, const void* b)
{
    return *(int*)a - *(int*)b;
}

int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    int* square = malloc(sizeof(int) * numsSize);
    *returnSize = numsSize;
    for(int i=0; i<numsSize; i++) square[i] = nums[i] * nums[i];
    qsort(square, numsSize, sizeof(int), cmp);
    return square;
}
```
