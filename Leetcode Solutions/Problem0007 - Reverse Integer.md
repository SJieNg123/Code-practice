# Reverse Integer
## Description
Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range \[-2^31^, 2^31^ - 1], then return 0.
Assume the environment does not allow you to store 64-bit integers (signed or unsigned).
<br>Difficuity : Medium
<br>Topics: Math
<br>[Question link](https://leetcode.com/problems/reverse-integer/description/?envType=problem-list-v2&envId=math)
## Solution
Here is my solution in c
<br>Time complexity is O(log(x))
```C
int reverse(int x){
    long sum = 0;
    while(x != 0)
    if(sum > INT_MAX ||sum < INT_MIN) return 0;
    else return (int)sum; 
}
```
