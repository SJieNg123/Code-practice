int maxProfit(int* prices, int pricesSize) {
    int total = 0;
    for(int i=1; i<pricesSize; i++)
    {
        if(prices[i] > prices[i-1]) total = total + prices[i] - prices[i-1];
    }
    return total;
}
