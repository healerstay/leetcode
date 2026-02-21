1class Solution {
2public:
3    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
4        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
5
6        for (int i = 0; i < mat.size(); ++i) {
7            int soldiers = countSoldiers(mat[i]);
8            pq.push({soldiers, i});
9        }
10
11        vector<int> result;
12        for (int i = 0; i < k; ++i) {
13            result.push_back(pq.top().second);
14            pq.pop();
15        }
16
17        return result;
18    }
19
20    int countSoldiers(vector<int>& row) {
21            int left = 0;
22            int right = row.size();
23            
24            while (left < right) {
25                int mid = left + (right - left) / 2;
26                if (row[mid] == 1)
27                    left = mid + 1;
28                else
29                    right = mid;
30            }
31            
32            return left;
33        }
34
35};