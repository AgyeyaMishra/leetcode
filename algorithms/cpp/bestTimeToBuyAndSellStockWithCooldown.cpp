class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() <= 1) return 0;
        int A = 0, B = -prices[0], C = 0;
        for(int i = 1; i<prices.size(); ++i){
            int tmp = A;
            A = max(A, C);
            C = B + prices[i];
            B = max(B, tmp - prices[i]);
        }
        return max(A, C);
        
    }
};
