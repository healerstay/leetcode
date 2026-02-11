1class Solution {
2public:
3    bool containsDuplicate(vector<int>& nums) {
4        std::unordered_map<int, int> count;
5
6        for (int num : nums) {
7            count[num]++;
8            if (count[num] > 1) return true;
9        }
10        return false;
11    }
12};