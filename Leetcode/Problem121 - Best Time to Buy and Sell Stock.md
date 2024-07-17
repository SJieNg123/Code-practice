# Best Time to Buy and Sell Stock 
[question link](https://140.114.85.195/problem/3](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/))

## Description
You are given an array prices where prices[i] is the price of a given stock on the ith day. 
You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock. 
Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.
<br>Difficuity : Easy
<br>Topics: Array, dynamic programming

## Solution
Here is my solution in c, 
```C
int maxProfit(int* prices, int pricesSize) {

    // brute force solution
    // code below will face TLE since the time complexity is O(n^2)
    /*
    int profit = 0;
    for(int i=pricesSize-1; i>0; i--)
    {
        for(int j=i-1; j>=0; j--)
        {
            if(prices[i] > prices[j])
            {
                if(prices[i] - prices[j] > profit) 
                profit = prices[i] - prices[j];
            }
        }
    }
    */

    // code below reduce time complexity to O(n), so it will pass all testcases
    int ans = 0, min = 10000;
    for(int i=0; i<pricesSize; i++)
    {
        int current = prices[i];
        if(current < min) min = current;
        else if(current - min > ans) ans = current - min;
    }

    return ans;
}
```
[solution link](https://github.com/SJieNg123/Code-practice/blob/main/Leetcode/Problem121%20-%20Best%20Time%20to%20Buy%20and%20Sell%20Stock.c)
