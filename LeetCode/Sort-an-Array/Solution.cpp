1class Solution {
2public:
3    vector<int> sortArray(vector<int>& nums) {
4        int n = nums.size();
5
6        for (int i = n / 2 - 1; i >= 0; --i) {
7            heapify(nums, n, i);
8        }
9
10        for (int i = n - 1; i > 0; --i) {
11            std::swap(nums[0], nums[i]);
12            heapify(nums, i, 0);
13        }
14
15        return nums;
16    }
17
18    void heapify(std::vector<int>& nums, int n, int i) {
19        int largest = i;  
20        int left = 2 * i + 1; 
21        int right = 2 * i + 2; 
22
23        if (left < n && nums[left] > nums[largest]) {
24            largest = left;
25        }
26        if (right < n && nums[right] > nums[largest]) {
27            largest = right;
28        }
29        if (largest != i) {
30            std::swap(nums[i], nums[largest]);
31            heapify(nums, n, largest);
32        }
33    }
34};