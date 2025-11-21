If I have not mistaken, the question is about recursion. Given 2 integer n and k. Output length = n combination of accending order numbers start from k. For example:
<br>Input: 3 5
<br>Output: (1 2 3) (1 2 4) (1 2 5) (1 3 4) (1 3 5) (1 4 5) (2 3 4) (2 3 5) (2 4 5) (3 4 5)
<br>Guessed solution using C, not guaranteed to be correct
```
#include <stdio.h>

int n, k;
int pick[64];

void dfs(int pos, int start) 
{
    if (pos == n) 
    {
        for (int i = 0; i < n; ++i) 
        {
            if (i) putchar(' ');
            printf("%d", pick[i]);
        };
        printf("\n");
        return;
    }

    for (int i = start; i <= k - (n - pos) + 1; ++i) 
    {
        pick[pos] = i;
        dfs(pos + 1, i + 1);
    }
}

int main(void) 
{
    scanf("%d %d", &n, &k);
    dfs(0, 1);
    return 0;
}

```
