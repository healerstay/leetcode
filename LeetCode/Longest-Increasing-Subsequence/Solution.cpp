1class Solution {
2public:
3    int lengthOfLIS(vector<int>& nums) {
4        vector<int> tail;
5
6        for (auto num : nums) {
7            auto it = lower_bound(tail.begin(), tail.end(), num);
8
9            if (it == tail.end()) tail.push_back(num);
10            else *it = num;
11        }
12
13        return tail.size();
14    }
15};