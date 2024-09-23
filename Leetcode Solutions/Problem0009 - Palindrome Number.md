# Palindrome Number

## Description
Given an integer x, return true if x is a palindrome, and false otherwise.
<br>Difficuity : Easy
<br>Topics: Math
<br>[Question link](https://leetcode.com/problems/palindrome-number/description/)

## Solution
Here is my solution in c
<br>Time complexity is O(n)
```C
bool isPalindrome(int x) {
    long long reverse = 0, tmp = x;
    while(tmp > 0)
    {
        reverse = reverse * 10 + tmp % 10;
        tmp = tmp / 10;
    }

    if(x == reverse) return true;
    else return false;
}
```
