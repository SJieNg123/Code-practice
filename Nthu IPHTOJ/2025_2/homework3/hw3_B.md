# too many treasures

## Description
Ovuvuevuevue Enyetuenwuevue Ugbemugbem Osas accidentally found an undiscovered tomb. He successfully sneaked in without triggering any traps. 
When he finally got into the treasure room, he found a note that warns tomb raiders about the trap in the treasure room. 
Osas arranged the note and concluded some rules:
- The treasure room has n treasure crates, each crate has its value. The values are sorted in descending order.
- There are several intervals [l,r] on the note.
- Tomb raiders must loot less than or equal to m treasure crates in the correct interval, where m is a number that Osas have to guess.
- If any tomb raider loot more than m treasure crates or loot any crate that not in the interval, the trap would trigger and kill that tomb raider! Osas doesn't want to die here.
- Osas wants these treasures, but he doesn't want to die. Osas wants to know if he pick one interval and guess a number as m, what is the maximum value he could loot? Osas asks you for help! 
Osas will give you the value of every treasure crate and the number he would like to guess, you need to write a program to help him.

<br>Inputs: The input contains exactly one testcase. The first line contains two integers n, q. q indicates the amount of queries of (l,r,m).
The next line is the sequence of values of n treasure crates, each separated by a space.
The next q lines, each line contains exactly three integers l, r, m. 1 ≤ m ≤ n ≤ 10^6 ,1 ≤ q ≤ 10^6 ,1 ≤ l ≤ r ≤ n,m ≤ r−l+1, the value of every treasure crate won't larger than 10^5 or smaller than −10^5 .
All of the values are integers. Note that the value could be negative, and Osas can choose nothing. Note that the sequence index starts from 1. For example, a sequence a = {3 4 5 6 7}, a[4]=6, a[1]=3.

<br>Outputs: For each query, output the maximum value Osas could get. Each query holds exactly one line.
Remember to print a '\n' at the end of the output.
<br>Topics: Prefix sum

## Solution
Here is my solution in C
```C
#include <stdio.h>

int main()
{
    int n, q;
    scanf("%d %d", &n, &q);
    long long presum[n+1];
    presum[0] = 0;
    for(int i=1; i<=n; i++)
    {
        scanf("%lld", &presum[i]);
        if(presum[i] < 0) presum[i] = 0;
        presum[i] += presum[i-1];    
    }
    
    for(int i=0; i<q; i++)
    {
        int l, r, m;
        scanf("%d %d %d", &l, &r, &m);
        if(m < r) printf("%lld\n", presum[l+m-1] - presum[l-1]);
        else printf("%lld\n", presum[r] - presum[l-1]);
    }
    return 0;
}
```
