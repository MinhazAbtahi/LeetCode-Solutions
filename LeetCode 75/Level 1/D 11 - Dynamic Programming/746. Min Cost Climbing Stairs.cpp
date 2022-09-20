class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int len = cost.size();        
        vector<int> dp(len + 1, 0);
        
        for (int i = 2; i <= len; i++) {
            dp[i] = min(cost[i - 1] + dp[i - 1], cost[i - 2] + dp[i - 2]);
        }
        return dp[len];
        
        /*
        int size = cost.size();
        int dp[size];
        
        dp[0] = cost[0];
        dp[1] = cost[1];
        
        for(int i = 2; i < size; i++) {
            dp[i] = cost[i] + min(dp[1-1], dp[i-2]);            
        }
        
        return min(dp[size - 2], dp[size - 1]);
        */
    }
};