// Last updated: 6/1/2026, 11:44:34 AM
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& v) {
        int n = v.size();

        int count = 0;
        int maxCount = 0;

        for(int i = 0; i < n; i++) {
            if (v[i] == 1) {
                count++;
            }
            if (v[i] != 1) {
                if (count > maxCount) {
                    maxCount = count;
                }
                count = 0;
            }
        }

        if (count > maxCount) {
            maxCount = count;
        }

        return maxCount;
    }
};