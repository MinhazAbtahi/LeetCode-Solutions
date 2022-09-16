class Solution {
public:
    int dp[31];
    int fib(int n) {   
        if(n <= 1) return n;
        
        if(dp[n] > 0) return dp[n];
        
        dp[n] = fib(n - 1) + fib(n - 2);
        
        return dp[n];
        
        /* dp 2
        int dp[n + 1];
        
        if(n <= 1) return n;
        
        dp[0] = 0;
        dp[1] = 1;
        
        for(int i = 2; i <= n; i++) {
            dp[i] = dp[i - 1] + dp[i - 2];
        }
        
        return dp[n];
        */
        
        /*
        // Recursive
        if(n <= 1) return n;
        
        return fib(n - 1) + fib(n - 2);
        */
    }
};