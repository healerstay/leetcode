1class Solution {
2public:
3    bool canJump(vector<int>& nums) {
4        int curr = nums.size() - 1;
5        for(int i = nums.size() - 1; i >= 0; --i) {
6            if (curr <= i + nums[i]) curr = i; 
7        }
8        return curr == 0;
9    }
10};