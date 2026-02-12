1class Solution {
2public:
3    int maximumGap(vector<int>& nums) {
4        int max = *std::max_element(nums.begin(), nums.end());
5
6        for (long long exp = 1; max / exp > 0; exp *= 10) {
7            counting_sort_by_digit(nums, exp);
8        }
9
10        int result = 0;
11        for (int i = 1; i < nums.size(); ++i) {
12            int temp = nums[i] - nums[i - 1];
13            if (temp > result) result = temp;
14        }
15        return result;
16    }
17
18    void counting_sort_by_digit(std::vector<int>& nums, int exp) {
19        int n = nums.size();
20        std::vector<int> output(n);
21        std::vector<int> count(10, 0);
22
23        for (int i = 0; i < n; i++) {
24            int digit = (nums[i] / exp) % 10;
25            count[digit]++;
26        }
27        for (int i = 1; i < 10; i++) {
28            count[i] += count[i - 1];
29        }
30
31        for (int i = n - 1; i >= 0; i--) {
32            int digit = (nums[i] / exp) % 10;
33            output[count[digit] - 1] = nums[i];
34            count[digit]--;
35        }
36
37        nums = output;
38    }
39};