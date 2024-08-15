# Roman to Integer

## Description
Given a roman numeral, convert it to an integer.
<br>Difficuity : Easy
<br>Topics: Math, String, Hash table
<br>[Question link](https://leetcode.com/problems/roman-to-integer/description/)

## Solution
Here is my solution in c
<br>Time complexity is O(n)
```C
int romanToInt(char* s) {
    int len = strlen(s);
    int ans = 0;
    for(int i=0; i<len; i++)
    {
        switch (s[i])
        {
            case 'I':
            {
                if(s[i+1] == 'V')
                {
                    ans += 4;
                    i++;
                }
                else if(s[i+1] == 'X')
                {
                    ans += 9;
                    i++;
                }
                else ans += 1;
                break;

                case 'V':
                {
                    ans += 5;
                    break;
                }

                case 'X':
                {
                    if(s[i+1] == 'L')
                    {
                        ans += 40;
                        i++;
                    }
                    else if(s[i+1] == 'C')
                    {
                        ans += 90;
                        i++;
                    }
                    else ans += 10;
                    break;
                }

                case 'L':
                {
                    ans += 50;
                    break;
                }

                case 'C':
                {
                    if(s[i+1] == 'D')
                    {
                        ans += 400;
                        i++;
                    }
                    else if(s[i+1] == 'M')
                    {
                        ans += 900;
                        i++;
                    }
                    else ans += 100;
                    break;
                }

                case 'D':
                {
                    ans += 500;
                    break;
                }

                case 'M':
                {
                    ans += 1000;
                    break;
                }
            }
        }
    }
    return ans;
}
```
[Solution link](https://github.com/SJieNg123/Code-practice/blob/main/Leetcode/Problem0013%20-%20Roman%20to%20Integer.c)
