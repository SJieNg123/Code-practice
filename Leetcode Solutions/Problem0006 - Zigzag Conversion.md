# Zigzag Conversion

## Description
The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)
<br>P   A   H   N
<br>A P L S I I G
<br>Y   I   R
<br>And then read line by line: "PAHNAPLSIIGYIR"
Write the code that will take a string and make this conversion given a number of rows:
string convert(string s, int numRows);
<br>Difficuity : Medium
<br>Topics: String
<br>[Question link](https://leetcode.com/problems/zigzag-conversion/description/)

## Solution
Here is my solution in cpp
<br>Time complexity is O(n)
```Cpp
class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1 || s.length() <= numRows) return s;

        vector<string> rows(numRows);

        int cur_row = 0;
        bool go_down = true;

        for(char c:s)
        {
            rows[cur_row] += c;
            if(cur_row == 0) go_down = true;
            else if(cur_row == numRows - 1) go_down = false;

            if(go_down) cur_row ++;
            else cur_row --;
        }

        string result;
        for(const string& row:rows)
        {
            result += row;
        }
        return result;
    }
};
```
