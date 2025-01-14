# Search Insert Position

## Description
Given a sorted array of distinct integers and a target value, return the index if the target is found. 
If not, return the index where it would be if it were inserted in order.
You must write an algorithm with O(log n) runtime complexity.
<br>Difficuity : Easy
<br>Topics: Array, Binary Search
<br>[Question link](https://leetcode.com/problems/search-insert-position/description/?envType=problem-list-v2&envId=binary-search)
## Solution
Here is my solution in c
<br>Time complexity is O(log n)
```C
int searchInsert(int* nums, int numsSize, int target) {
    int left = 0, right = numsSize - 1, mid;
    while(left <= right)
    {
        mid = left + (right - left) / 2;
        if(nums[mid] == target) return mid;
        else if(nums[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return left;
}
```
