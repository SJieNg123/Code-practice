# Best Time to Buy and Sell Stock II

## Description
You are given an integer array prices where prices[i] is the price of a given stock on the ith day. On each day, you may decide to buy and/or sell the stock. 
You can only hold at most one share of the stock at any time. However, you can buy it then immediately sell it on the same day. Find and return the maximum profit you can achieve.
<br>Difficuity : Medium
<br>Topics: Array, Dynamic Programming, Greedy
<br>[Question link](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/description/)

## Solution
Here is my solution in c
<br>Time complexity is O(n)
```C
int maxProfit(int* prices, int pricesSize) {
    int total = 0;
    for(int i=1; i<pricesSize; i++)
    {
        if(prices[i] > prices[i-1]) total = total + prices[i] - prices[i-1];
    }
    return total;
}
```
