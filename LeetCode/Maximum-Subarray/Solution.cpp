1class Solution {
2public:
3    int maxSubArray(vector<int>& nums) {
4        int maxSum = nums[0];
5        int currSum = nums[0];
6
7        for (int i = 1; i < nums.size(); ++i) {
8            int num = nums[i];
9            currSum = max(num, num + currSum);
10            maxSum = max(maxSum, currSum);
11        }
12
13        return maxSum;
14    }
15};