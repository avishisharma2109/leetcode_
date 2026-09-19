// Last updated: 9/20/2026, 12:57:49 AM
1#include <vector>
2using namespace std;
3
4class Solution {
5public:
6    int maxProfit(vector<int>& prices) {
7        int minPrice = prices[0];
8        int maxProfit = 0;
9
10        for (int i = 1; i < prices.size(); i++) {
11            if (prices[i] < minPrice) {
12                minPrice = prices[i];  
13            } else {
14                int profit = prices[i] - minPrice;
15                if (profit > maxProfit) {
16                    maxProfit = profit;
17                }
18            }
19        }
20
21        return maxProfit;
22    }
23};