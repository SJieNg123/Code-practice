# Happy Number

## Description
Write an algorithm to determine if a number n is happy.
A happy number is a number defined by the following process:
<br> - Starting with any positive integer, replace the number by the sum of the squares of its digits.
<br> - Repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1.
<br> - Those numbers for which this process ends in 1 are happy.
<br>Return true if n is a happy number, and false if not.
<br>Difficuity : Easy
<br>Topics: Two Pointers, Math, Hash Table
<br>[Question link](https://leetcode.com/problems/happy-number/description/)

## Solution
Here is my solution in c
<br>Time complexity is O(n)
```C
bool isHappy(int n) {
    if(n == 1 || n == 7) return true;
    else if(n < 10) return false;

    int sq = 0, sum = 0;
    while(n != 0)
    {
        sq = n % 10;
        sum = sum + (sq * sq);
        n = n / 10;
    }

    return isHappy(sum);
}
```
[Solution link](https://github.com/SJieNg123/Code-practice/blob/main/Leetcode%20Solutions/Problem0202%20-%20Happy%20Number.c)
