int maxProfit(int* prices, int pricesSize) {
    int maxp = 0;
    int minp= prices[0];
    for(int i = 1; i<pricesSize; i++){
        if(prices[i]<minp){
            minp= prices[i];
        }
        else{
            int profit = prices[i]- minp;
            if(profit>maxp){
                maxp = profit;
            }
        }
        
    }
    return maxp;
}