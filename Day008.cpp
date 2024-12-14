/*
akashmaji945
*/
class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        int n = prices.size();
        int buy = prices[0];
        int sell = buy;
        int i = 1;
        int profit = 0;
        while(i < n){
            if(prices[i] > prices[i-1]){
                sell = prices[i];
                i++;
            }else{
                profit = max(profit, sell-buy);
                sell = prices[i];
                if(prices[i] < buy){
                   buy = sell;
                }
                i++;
            }
        }
        profit = max(profit, sell-buy);
        return profit;
    }
};
