# Median of Two Sorted Arrays

## Description
Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.
The overall run time complexity should be O(log (m+n)).
<br>Difficuity : Hard
<br>Topics: Array, Binary Search, Divide and Conquer
<br>[Question link](https://leetcode.com/problems/median-of-two-sorted-arrays/description/?envType=problem-list-v2&envId=binary-search)
## Solution
Here is my solution in c
<br>Time complexity is O(m+n)
```C
double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    double ans;
    int b;
    int t[nums1Size + nums2Size];
    int i = 0, j = 0, k = 0;
    while((i < nums1Size) && (j < nums2Size))
    {
        if(nums1[i] < nums2[j])
        {
            t[k] = nums1[i];
            i++;
            k++;
        }
        else
        {
            t[k] = nums2[j];
            j++;
            k++;
        }
    }

    // handle remainding elements
    if(i == nums1Size)
    {
        while(j < nums2Size)
        {
            t[k] = nums2[j];
            j++;
            k++;
        }
    }

    if(j == nums2Size)
    {
        while(i < nums1Size)
        {
            t[k] = nums1[i];
            i++;
            k++;
        }
    }

    // odd case
    if((nums1Size + nums2Size) % 2 == 1)
    {
        ans = (double)t[(nums1Size + nums2Size) / 2];
        return ans;
    }
    // even case
    else
    {
        ans = ((double)(t[(nums1Size + nums2Size) / 2] + t[(nums1Size + nums2Size) / 2 - 1]) / 2);
        return ans;
    }
}
```
