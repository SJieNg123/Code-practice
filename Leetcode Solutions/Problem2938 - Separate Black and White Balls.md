# Separate Black and White Balls

## Description
There are n balls on a table, each ball has a color black or white.
You are given a 0-indexed binary string s of length n, where 1 and 0 represent black and white balls, respectively.
In each step, you can choose two adjacent balls and swap them.
Return the minimum number of steps to group all the black balls to the right and all the white balls to the left.
<br>Difficuity : Medium
<br>Topics: Two Pointers, String, Greedy
<br>[Question link](https://leetcode.com/problems/separate-black-and-white-balls/description/)

## Solution
Here is my solution in c
<br>Time complexity is O(n)
```C
long long minimumSteps(char* s) {
    int len = strlen(s);
    long long zeros = 0, swaps = 0;
    for(int i=len-1; i>=0; i--)
    {
        // count zeros
        if(s[i] == '0') zeros++;
        // count number of swap needed when '1' occurs
        else swaps = swaps + zeros;
    }
    return swaps;
}
```
