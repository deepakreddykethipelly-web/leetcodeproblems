int maxProfit(int* prices, int pricesSize) {
    int small=prices[0],l=0,large=0;
    for(int i=0;i<pricesSize;i++)
    {
        if(small>prices[i]){
        small=prices[i];
        }
        else if(prices[i]-small>large){
            large=prices[i]-small;
        }
    }
    return large;

}