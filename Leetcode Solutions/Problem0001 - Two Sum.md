# Two Sum

## Description
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.
<br>Difficuity : Easy
<br>Topics: Array, Hashtable
<br>[Question link](https://leetcode.com/problems/two-sum/description/)
## Solution
Here is my solution in c
<br>Time complexity is O(n^2) for brute force and O(nlog(n)) for hashmap
<br>Brute force method
```C
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
*returnSize=2;
int *array = malloc(2*sizeof(int) );
for (int i=0; i<numsSize;i++)
{
    for( int j=1+i;j<numsSize;j++)
    {
        if(nums[i] + nums[j] == target)
        {
        array[0]=i;
        array[1]=j;
        return array;
        }
    }   
}
return -1;
}
```
<br>Hashtable method
```C
typedef struct _map
{
    int num;
    int index;
} Map;

int cmp(const void *a, const void *b)
{
    return *(int*)a - *(int*)b;
}

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize = 2;
    int *result = malloc(sizeof(int) * (*returnSize));

    Map* map = malloc(sizeof(map) * numsSize);
    for(int i=0; i<numsSize; i++)
    {
        map[i].num = nums[i];
        map[i].index = i;
    }

    qsort(map, numsSize, sizeof(Map), cmp);
    int l = 0, r = numsSize - 1;
    while(l <= r)
    {
        int sum = map[l].num + map[r].num;
        if(sum == target)
        {
            result[0] = map[l].index;
            result[1] = map[r].index;
            return result;
        } 
        else if(sum < target) l++;
        else r--;
    }
    free(result);
    *returnSize = 0;
    return NULL;
}
```
