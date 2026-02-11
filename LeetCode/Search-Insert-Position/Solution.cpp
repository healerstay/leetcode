1class Solution {
2public:
3    int searchInsert(vector<int>& nums, int target) {
4        int left = 0;
5        int right = nums.size() - 1;
6
7        while(left <= right) {
8            int mid = left + (right - left) / 2;
9            if (nums[mid] == target) return mid;
10            else if (nums[mid] > target) {
11                right = mid - 1;
12                continue;
13            }
14            else {
15                left = mid + 1;
16                continue;
17            }
18        }
19        return left;
20    }
21};