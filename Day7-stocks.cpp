class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        int p=0;
        int k=prices.size();
        for(int i=1; i<k;i++) {
            if(prices[i]>prices[i-1])
            p+=prices[i]-prices[i-1];
        }
        return p;
    }
};
