# Reverse String

## Description
Write a function that reverses a string. The input string is given as an array of characters s.
You must do this by modifying the input array in-place with O(1) extra memory.
<br>Difficuity : Easy
<br>Topics: Two Pointers, String
<br>[Question link](https://leetcode.com/problems/reverse-string/description/)

## Solution
Here is my solution in cpp
<br>Time complexity is O(n)
```Cpp
class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0;
        int right = s.size() - 1;

        while(left < right)
        {
            swap(s[left], s[right]);
            left++;
            right--;
        }
    }
};
```
