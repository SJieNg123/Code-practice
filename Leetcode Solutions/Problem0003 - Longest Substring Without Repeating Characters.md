# Longest Substring Without Repeating Characters

## Description
Given a string s, find the length of the longest substring without duplicate characters.
<br>Difficuity : Medium
<br>Topics: Hash Table, String, Sliding Window
<br>[Question link](https://leetcode.com/problems/longest-substring-without-repeating-characters/description/)

## Solution
Here is my solution in cpp
<br>Time complexity is O(n)
```C
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char, int> last_seen;
        int max_len = 0;
        int left = 0;

        for(int right = 0; right < s.length(); right++)
        {
            char c = s[right];

            // check if the char is seen and is in window
            if(last_seen.find(c) != last_seen.end() && last_seen[c] >= left)
            {
                left = last_seen[c] + 1;
            }

            // update last seen index
            last_seen[c] = right;

            // update max
            max_len = max(max_len, right - left + 1);
        }
        return max_len;
    }
};
```
