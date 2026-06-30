class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<int>best_buy(n);
        best_buy[0]=INT_MAX;
        for(int i=1;i<n;i++){
            best_buy[i]=min(best_buy[i-1],prices[i-1]);
        }
        int maxProfit=0;
        for(int i=0;i<n;i++){
            int currPro= prices[i]-best_buy[i];
            maxProfit=max(maxProfit,currPro);
        }
        return maxProfit;
        
    }
};
