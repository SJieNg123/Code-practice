# Add Digits

## Description
Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.
<br>Difficuity : Easy
<br>Topics: Math, Number Theory
<br>[Question link](https://leetcode.com/problems/add-digits/description/)

## Solution
Here is my solution in c
<br>Time complexity is O(digits) for naive apporoach, O(1) for mathematical method
```C
// naive approach
int addDigits(int num) {
    while(num >= 10)
    {
        int sum = 0;
        while(num > 0)
        {
            sum = sum + num % 10;
            num = num / 10;
        }
        num = sum;
    }
    return num;
}

// mathematical method
int addDigits(int num) {
    if(num == 0) return 0;
    else return 1 + (num - 1) % 9;
}
```
