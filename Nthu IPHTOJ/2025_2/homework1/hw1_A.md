# Permutation 1

## Description
Given a set of n distinct characters and a positive integer k, find all possible strings of length k that can be formed from the given set.
For example, we have a set of characters {a,b}, k=3, all possible strings of length 3 that can be formed from {a,b} is: aaa, aab, aba, abb, baa, bab, bba, bbb
<br>Inputs: The first line contains a string with length n, each character of the string is an distinct element of the set. Note that characters will only be uppercase and lowercase alphabets ('a' - 'z' and 'A' - 'Z').
The second line contains one integer k, which means the length of desired string. Note that 0<n<20 and 0<k<10.
<br>Outputs: Print all possible strings of length k that can be formed from the set of n characters. Output string order is according to the order of input string instead of lexical order. Remember to print \n after each string.
<br>Topics: Recursion
## Solution
Here is my solution in C
```C
#include <stdio.h>
#include <string.h>

void solve(char *s, int k, int len, char *out, int pos)
{
    if(pos == k)
    {
        out[pos] = '\0';
        printf("%s\n", out);
        return;
    }
    for(int i=0; i<len; i++)
    {
        out[pos] = s[i];
        solve(s, k, len, out, pos + 1);
    }
}

int main()
{
    char s[21];
    int k;
    scanf("%s %d", s, &k);
    int len = strlen(s);
    char out[11];
    solve(s, k, len, out, 0);
}
```
