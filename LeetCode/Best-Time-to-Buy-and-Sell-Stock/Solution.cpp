1class Solution {
2public:
3    int maxProfit(vector<int>& prices) {
4        int minPrice = INT_MAX;
5        int maxProfit = 0; 
6
7        for (int price : prices) {
8            if (price < minPrice) minPrice = price;
9            maxProfit = max(maxProfit, price - minPrice);
10        }
11
12        return maxProfit;
13    }
14};