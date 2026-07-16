class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();  
        int MaxProfit = 0;  // highest Profit
        int BestBuy = prices[0]; // Prev Best Buying time of current price

        for(int i = 0; i<n; i++){
            if(prices[i] > BestBuy){ // checking 
                MaxProfit = max(MaxProfit, prices[i] - BestBuy);
            }
            BestBuy = min(BestBuy, prices[i]);
        }
        return MaxProfit; 
    }
};