# Remove Element

## Description
Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The order of the elements may be changed. 
Then return the number of elements in nums which are not equal to val.
Consider the number of elements in nums which are not equal to val be k, to get accepted, you need to do the following things:
- Change the array nums such that the first k elements of nums contain the elements which are not equal to val. The remaining elements of nums are not important as well as the size of nums.
- Return k.

<br>Difficuity : Easy
<br>Topics: Array, Two Pointers
<br>[Question link](https://leetcode.com/problems/remove-element/description/)
## Solution
Here is my solution in c
<br>Time complexity is O(n)
```C
int removeElement(int* nums, int numsSize, int val) {
    int k = 0;
    for(int i=0; i< numsSize; i++)
    {
        if(nums[i] != val)
        {
            nums[k] = nums[i];
            k++;
        }
    }
    return k;
}
```
