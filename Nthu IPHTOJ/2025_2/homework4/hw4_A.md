# Big Brain Accounting

## Description
You're a convenience store cashier, and it's almost closing time. Your final task is to calculate today's sales revenue. The higher the day's sales revenue, the higher your salary.
Exhausted, you realize that by rounding the sales revenue a few more times, the revenue will increase, and consequently, your salary will also increase. 
For example, 1450 can be rounded to the nearest hundred, becoming 1500, and then rounded to the nearest thousand, becoming 2000.
Even knowing about all these flaws, all you can think about is making money and getting off work.
Given a number x, output the maximum value the number can be after rounding to different decimal places multiple times.
<br>
<br>Inputs: The first line contains an integer t, indicates the number of testcases. Each line of the next t lines contains an integer x described above. 1 ≤ t ≤ 10^6 , 0 ≤ x ≤ 2^(31−1)
<br>Outputs: Output the maximum value the number can be after rounding x to different decimal places multiple times.
<br>Topics: Math
## Solution
Here is my solution in C
```C
#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        long long x, num = 10;
        scanf("%lld", &x);
        while(num / 10 <= x)
        {
            if(x % num / (num / 10) >= 5) x= x + (num - (x % num));
            num *= 10;
        }
        printf("%lld\n", x);
    }
    return 0;
}
```
