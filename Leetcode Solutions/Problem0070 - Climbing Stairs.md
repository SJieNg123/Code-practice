# Climbing Stairs

## Description
You are climbing a staircase. It takes n steps to reach the top.
Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?
<br>Difficuity : Easy
<br>Topics: Math, Dynamic Programming, Memoization
<br>[Question link](https://leetcode.com/problems/climbing-stairs/description/)

## Solution
Here is my solution in c
<br>Time complexity is O(n)
```C
int climbStairs(int n) {
    if(n == 1) return 1;
    int steps[n+1];
    steps[0] = 1;
    steps[1] = 1;
    for(int i=2; i<=n; i++)
    {
        steps[i] = steps[i-1] + steps[i-2];
    }
    return steps[n];
}
```
