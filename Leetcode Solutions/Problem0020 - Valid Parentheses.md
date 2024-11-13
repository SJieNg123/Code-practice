# Valid Parentheses

## Description
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
An input string is valid if:
- Open brackets must be closed by the same type of brackets.
- Open brackets must be closed in the correct order.
- Every close bracket has a corresponding open bracket of the same type.
<br>Difficuity : Easy
<br>Topics: Stack, String
<br>[Question link](https://leetcode.com/problems/valid-parentheses/description/)
## Solution
Here is my solution in cpp
<br>Time complexity is O(n)
```C++
class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        for(char c: s)
        {
            if(c == '(' || c == '{' || c == '[') stack.push(c);
            else
            {
                if(stack.empty()) return false;
                char top = stack.top();
                stack.pop();
                if  ((c == ')' && top != '(') || 
                    (c == '}' && top != '{') || 
                    (c == ']' && top != '[')) return false;
            }
        }
        return stack.empty();
    }
};
```
