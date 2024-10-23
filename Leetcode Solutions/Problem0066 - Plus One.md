# Plus One

## Description
You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. 
The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.
Increment the large integer by one and return the resulting array of digits.
<br>Difficuity : Easy
<br>Topics: Math, Array
<br>[Question link](https://leetcode.com/problems/plus-one/submissions/1354103896/)
## Solution
Here is my solution in c
<br>Time complexity is O(n)
```C
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    for(int i=digitsSize-1; i>=0; i--)
    {
        digits[i]++;
        if(digits[i] < 10)
        {
            *returnSize = digitsSize;
            return digits;
        }
        else digits[i] = 0;
    }

    int *result = (int*)malloc((digitsSize+1) * sizeof(int));
    result[0] = 1;
    for(int i=1; i<=digitsSize; i++) result[i] = digits[i-1];
    *returnSize = digitsSize + 1;
    return result;
}
```
