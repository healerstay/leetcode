1class Solution {
2public:
3    int islandPerimeter(vector<vector<int>>& grid) {
4        int n = grid.size();
5        int m = grid[0].size();
6        int perimeter = 0;
7
8        for (int i = 0; i < n; ++i) {
9            for (int j = 0; j < m; ++j) {
10                if (grid[i][j] == 1) {
11                    if (i == 0 || grid[i-1][j] == 0) perimeter++;
12                    if (j == 0 || grid[i][j-1] == 0) perimeter++;
13                    if (i == n-1 || grid[i+1][j] == 0) perimeter++;
14                    if (j == m-1 || grid[i][j+1] == 0) perimeter++;
15                }
16            }
17        }
18        return perimeter;
19    }
20};