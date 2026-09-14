class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_price=0,min_price=prices[0];
        int profit=0;
        int n= prices.size();
        for(int i=1;i<n;i++){
            profit= prices[i]-min_price;
            max_price=max(max_price,profit);
            min_price=min(min_price,prices[i]);

        }
      return max_price;
    }
};