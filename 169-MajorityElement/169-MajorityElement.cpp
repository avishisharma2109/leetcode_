// Last updated: 9/19/2026, 6:41:25 PM
1class Solution {
2public:
3    int majorityElement(vector<int>& nums) {
4                int candidate = 0;
5        int count = 0;
6
7        for(int num : nums) {
8
9            if(count == 0) {
10                candidate = num;
11            }
12
13            if(num == candidate) {
14                count++;
15            }
16            else {
17                count--;
18            }
19        }
20
21        return candidate;
22    }
23};