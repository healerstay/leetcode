1class Solution {
2public:
3    int climbStairs(int n) {
4        if (n == 1) return 1;
5        if (n == 2) return 2;
6        
7        vector<int> dp(n, 0);
8        dp[0] = 1;
9        dp[1] = 2;
10
11        for (int i = 2; i < n; ++i) {
12            dp[i] = dp[i-1] + dp[i-2];
13        }
14
15        return dp[n-1];
16    }
17};