# Radahn Festival

## Description
The space you can run is a straight line which starts from 0 and end to N. There are Q meteorites that fall on a line. 
The i-th meteorites will fall on the position that the leftmost point and the rightmost points is [Li ,Ri], respectively. 
You can only survive if you could rolling in time to a position that no meteories would hit (i.e. a safe position). 
Now you want to know the ratio of safe position among the spaces to estimate your chance of survival, please write a program to solve it.
<br>
<br>Inputs: The first line is an integer T(1 ≤ T ≤ 100), which indicates that there are T testcases below. 
For each testcase, the first line contains two integers N(1 ≤ N ≤ 10^9 ) and Q(1 ≤ Q ≤ 10^5). 
For the next Q lines, the i-th line contains two numbers Li​ and Ri ​(0 ≤ Li​ ≤Ri ​≤ N). 
Note that Li and Ri could be decimals (小數). The sum of Q among all testcases will not exceeed 10^5 .
<br>Outputs: Output the ratio of safe position among the spaces. Note that any answer errors up to 10^(−4) will be regarded as corrected answer.
<br>Topics: Sorting
## Solution
Here is my solution in C
```C
#include <stdio.h>
#include <stdlib.h>
#define MAX_N 100000

typedef struct
{
    double l, r;
}Interval;

Interval it[MAX_N];

int cmp_less(const void* a, const void* b)
{
    const Interval *ia = a;
    const Interval *ib = b;
    if(ia -> l < ib -> l) return -1;
    if(ia -> l > ib -> l) return 1;
    if(ia -> r < ib -> r) return -1;
    if(ia -> r > ib -> r) return 1;
}

void solve()
{
    int n, q;
    scanf("%d %d", &n, &q);
    for(int i=0; i<q; i++) scanf("%lf %lf", &it[i].l, &it[i].r);
    qsort(it, q, sizeof(it[0]), cmp_less);
    
    double total = 0, cur_l = 0, cur_r = 0;
    for(int i=0; i<q; i++)
    {
        if(it[i].l > cur_r)
        {
            total += cur_r - cur_l;
            cur_l = it[i].l;
            cur_r = it[i].r;
        }
        else if(it[i].r < cur_r) cur_r = it[i].r;
    }
    total += cur_r - cur_l;
    printf("%.6f\n", ((double)(n) - total) / n);
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}
```
