1class Solution {
2public:
3    int uniquePaths(int m, int n) {
4        vector<vector<int>> dp(m , vector(n, 0));
5
6        for (int i = 0; i < m; ++i) dp[i][0] = 1;
7        for (int j = 0; j < n; ++j) dp[0][j] = 1;
8
9        for (int i = 1; i < m; ++i) {
10            for (int j = 1; j < n; ++j) {
11                dp[i][j] = dp[i-1][j] + dp[i][j-1];
12            }
13        }
14
15        return dp[m-1][n-1];
16    }
17};