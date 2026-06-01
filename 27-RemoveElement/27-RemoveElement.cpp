// Last updated: 6/1/2026, 11:44:42 AM
class Solution {
public:
    int removeElement(vector<int>& v, int m) {
        
        int n = v.size();

        for (int i = 0; i < n; i++) {
            if (v[i] == m) {
                v.erase(v.begin() + i);
                i--;
                n--;
            }
        }

        return n;
    }
};