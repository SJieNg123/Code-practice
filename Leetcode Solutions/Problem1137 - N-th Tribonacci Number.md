# N-th Tribonacci Number

## Description
The Tribonacci sequence Tn is defined as follows: T0 = 0, T1 = 1, T2 = 1, and Tn+3 = Tn + Tn+1 + Tn+2 for n >= 0. Given n, return the value of Tn.
<br>Difficuity : Easy
<br>Topics: Math, Dynamic Programming, Memoization
<br>[Question link](https://leetcode.com/problems/n-th-tribonacci-number/description/)
## Solution
Here is my solution in c 
<br>Time complexity is O(n)
```C
int tribonacci(int n)
{
    int arr[38];
    arr[0] = 0;
    arr[1] = 1;
    arr[2] = 1;
    for(int i=3; i<=n; i++)
    {
        arr[i] = arr[i-1] + arr[i-2] + arr[i-3];
    }
    return arr[n];
}
```
