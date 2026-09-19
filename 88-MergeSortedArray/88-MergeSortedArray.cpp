// Last updated: 9/19/2026, 8:35:16 PM
1#include <vector>
2#include <algorithm>
3using namespace std;
4
5class Solution {
6public:
7    void merge(vector<int>& v, int n, vector<int>& v1, int m) {
8        v.resize(n);
9        v.insert(v.end(), v1.begin(), v1.end());
10        sort(v.begin(), v.end());
11    }
12};