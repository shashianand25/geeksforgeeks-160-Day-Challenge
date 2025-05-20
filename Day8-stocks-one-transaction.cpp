
class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        int sm=INT_MAX,p=0;
        int n=prices.size();
        for(int i=0; i<n-1; i++) {
            if(prices[i]<sm)
            sm=prices[i];
            
            if(prices[i+1]>sm)
            p= (prices[i+1]-sm>p)?prices[i+1]-sm:p;
        }
        return p;
    }
    
};
