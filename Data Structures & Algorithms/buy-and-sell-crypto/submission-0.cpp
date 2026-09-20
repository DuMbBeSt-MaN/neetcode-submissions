class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int profit = 0;
        for(int l=0;l<n;l++){
            int r=l+1;
            while(r<n){
                if(prices[l]<prices[r]){
                    profit = max(profit,prices[r]-prices[l]);
                }
                r++;
            }
        }
        return profit;
    }
};
