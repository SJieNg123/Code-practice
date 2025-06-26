# Palindrome Number

## Description
Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.
<br>Difficuity : Easy
<br>Topics: Two Pointers, String, String Matching
<br>[Question link](https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/description/)

## Solution
Here is my solution in cpp
<br>Time complexity is O(nm)
```Cpp
class Solution {
public:
    int strStr(string haystack, string needle) {
        int pos = haystack.find(needle);
        if(pos > -1) return pos;
        else return -1; 
    }
};
```
