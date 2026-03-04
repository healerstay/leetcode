1class Solution {
2public:
3    int minDistance(string word1, string word2) {
4        int n = word1.size();
5        int m = word2.size();
6        std::vector<std::vector<int>> dp(n + 1, std::vector<int>(m + 1, -1));
7
8        for (int i = 0; i <= n; ++i) {
9            for (int j = 0; j <= m; ++j) {
10                if (i == 0 || j == 0) dp[i][j] = i + j;
11                else if (word1[i - 1] == word2[j - 1])
12                    dp[i][j] = dp[i-1][j-1];
13                else 
14                    dp[i][j] = 1 + std::min(dp[i-1][j], std::min(dp[i][j-1], dp[i-1][j-1]));
15            }
16        }
17
18        return dp[n][m];
19    }
20};