// Last updated: 6/1/2026, 11:44:39 AM
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void merge(vector<int>& v, int n, vector<int>& v1, int m) {
        v.resize(n);
        v.insert(v.end(), v1.begin(), v1.end());
        sort(v.begin(), v.end());
    }
};