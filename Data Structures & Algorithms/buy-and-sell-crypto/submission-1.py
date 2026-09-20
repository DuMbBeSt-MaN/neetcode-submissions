class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        if(len(prices)==1):
            return 0;
        profit = 0
        l = 0
        r = l+1
        n = len(prices)
        profit = 0
        while(r<n):
            if(prices[l]<prices[r]):
                profit = max(profit,prices[r]-prices[l])
                r+=1
            else:
                l = r
                r = l+1
        return profit