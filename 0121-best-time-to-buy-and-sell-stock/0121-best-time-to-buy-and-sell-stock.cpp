class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int MaxProfit = 0; 
        int BestBuy = prices[0];

        for(int i = 0; i<n; i++){
            if(prices[i] > BestBuy){
                MaxProfit = max(MaxProfit, prices[i] - BestBuy);
            }
            BestBuy = min(BestBuy, prices[i]);
        }
        return MaxProfit; 
    }
};