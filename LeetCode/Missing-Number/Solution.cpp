1class Solution {
2public:
3    int missingNumber(vector<int>& nums) {
4        int n = nums.size();
5        int sum = n * (n + 1) / 2;
6
7        int sum2 = 0;
8        for (int num : nums) {
9            sum2 += num;
10        }
11
12        return sum - sum2;
13    }
14};