# Two Sum II - Input Array Is Sorted

## Description
Given a 1-indexed array of integers numbers that is already sorted in non-decreasing order, find two numbers such that they add up to a specific target number. 
Let these two numbers be numbers[index1] and numbers[index2] where 1 <= index1 < index2 <= numbers.length.
Return the indices of the two numbers, index1 and index2, added by one as an integer array [index1, index2] of length 2.
The tests are generated such that there is exactly one solution. You may not use the same element twice.
Your solution must use only constant extra space.
<br>Difficuity : Medium
<br>Topics: Array, Two Pointers, Binary Search
<br>[Question link](https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/)

## Solution
Here is my solution in c
<br>Time complexity is O(log(n))
```C
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
    *returnSize = 2;
    int left = 0, right = numbersSize - 1;
    int* ans = malloc(sizeof(int) * 2);
    while(left < right)
    {
        if(numbers[left] + numbers[right] == target)
        {
            ans[0] = left + 1;
            ans[1] = right + 1;
            break;
        }
        else if(numbers[left] + numbers[right] < target) left++;
        else right--;
    }
    return ans;
}
```
