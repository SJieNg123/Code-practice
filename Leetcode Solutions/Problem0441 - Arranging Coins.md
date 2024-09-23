# Arranging Coins

## Description
You have n coins and you want to build a staircase with these coins. The staircase consists of k rows where the ith row has exactly i coins. 
The last row of the staircase may be incomplete.
Given the integer n, return the number of complete rows of the staircase you will build.
<br>Difficuity : Easy
<br>Topics: Math, Binary Search
<br>[Question link](https://leetcode.com/problems/arranging-coins/description/)

## Solution
Here is my solution in c in naive approach and binary search
<br>Time complexity is O(sqrt(n)) for naive approach and O(log n) for binary search method
```C
// naive approach
int arrangeCoins(int n) {
    int row = 0;
    for(row = 1; row <= n; row++) n = n - row;
    return row - 1;
}

// binary search
int arrangeCoins(int n) {
    int left = 0, right = n;
    while(left <= right)
    {
        long mid = (right - left) / 2 + left;
        // code below use arithmetic sum formula to calculate used_coin
        long used_coin = mid * (mid + 1) / 2;
        if(used_coin == n) return mid;
        else if(used_coin < n) left = mid + 1;
        else right = mid - 1;
    }
    return right;
}
```
