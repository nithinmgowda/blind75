int profit =0;
int buy = prices[0];
for(int i=1; i<prices.size(); i++){
    if(prices[i]<buy){
        buy = prices[i];
    }
    int op = prices[i]-buy;
    profit = max(profit,op);
    }
    return profit;

}
};