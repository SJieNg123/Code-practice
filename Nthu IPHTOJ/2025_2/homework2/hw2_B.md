# Permutation 1

## Description
You will have n n numbers and q q times of queries. Each query includes two numbers a a, b b which indicate the range. 
The sum of a range indicates the sum of numbers from position a a to position b b. If a a bigger than b b , you need to sum up the numbers from a a to the end and from the start to b b. 
If a a is smaller than b b you just need to sum up the numbers from a a to b b. If a a is equal to b b, than there's only one number, and the number will be the sum. 
Your task is finding the range that has the maximum sum. Note that the index is start from 1. If you find multiple answers, you only need to answer the first one appear in the queries.
<br>
<br>Inputs: Input end with EOF. Each testcase contains several lines. First line contains two integer n(1 ≤ n ≤ 2×10^6)​​ and q(1 ≤ q ≤ 2×10^6) Second line contains n integers. 
Each number ranged from 1∼10^9 . The following are q lines. Each line contain two integer a, b (1 ≤ a, b ≤ n) Testcases are divided by a blank line.
<br>Outputs: For each testcases print the answer in the following format:
Max_range: (%d,%d); Value: %d
The first two integer means the two numbers which indicate the range.
The last integer means the sum of this range.
Remember to print \n at the end of each output.
<br>Topics: Prefix sum
## Solution
Here is my solution in C
```C
#include <stdio.h>

int main()
{
    int n, q;
    while(scanf("%d %d", &n, &q) != EOF)
    {
        long long presum[n + 1];
        presum[0] = 0;
        for(int i=1; i<=n; i++)
        {
            scanf("%lld", &presum[i]);
            presum[i] += presum[i-1];
        }
        
        long long cur = 0, max = 0;
        int a, b, max_a, max_b;
        for(int i=0; i<q; i++)
        {
            scanf("%d %d", &a, &b);
            if(a <= b) cur = presum[b] - presum[a-1];
            else cur = presum[n] - presum[a-1] + presum[b];
            if(cur > max)
            {
                max = cur;
                max_a = a;
                max_b = b;
            }
        }
        printf("Max_range: (%d,%d); Value: %lld\n", max_a, max_b, max);
    }
    return 0;
}
```
