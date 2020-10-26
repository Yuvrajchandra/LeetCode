class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0,minPrice = INT_MAX;
        for(int i=0; i<prices.size(); i++)
        {
            minPrice = min(minPrice, prices[i]);
            maxProfit = max(prices[i]-minPrice,maxProfit);
            
        }
        return maxProfit;
        
    }
};
