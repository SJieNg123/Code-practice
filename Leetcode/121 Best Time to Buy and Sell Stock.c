int maxProfit(int* prices, int pricesSize) {
    //int profit = 0;
    /*
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

    int ans = 0, min = 10000;
    for(int i=0; i<pricesSize; i++)
    {
        int current = prices[i];
        if(current < min) min = current;
        else if(current - min > ans) ans = current - min;
    }

    return ans;
}
