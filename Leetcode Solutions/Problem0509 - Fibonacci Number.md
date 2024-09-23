# Fibonacci Number

## Description
The Fibonacci numbers, commonly denoted F(n) form a sequence, called the Fibonacci sequence, such that each number is the sum of the two preceding ones, 
starting from 0 and 1. That is, F(0) = 0, F(1) = 1, F(n) = F(n - 1) + F(n - 2), for n > 1. Given n, calculate F(n).
<br>Difficuity : Easy
<br>Topics: Math, Dynamic Programming, Recursion, Memoization
<br>[Question link](https://leetcode.com/problems/fibonacci-number/description/)
## Solution
Here is my solution in c using recursion and dp method
<br>Time complexity is O(2^n) for recursion and O(n) for dp
```C
// recursion method
int fib(int n)
{
    if(n<=1) return n;
    else return fib(n-1) + fib(n-2);
}

// dp method
int fib(int n)
{
    if(n<=1) return n;
    int arr[n+1];
    arr[0] = 0;
    arr[1] = 1;
    for(int i=2; i<=n; i++)
    {
        arr[i] = arr[i-1] + arr[i-2];
    }
    return arr[n];
}
```
