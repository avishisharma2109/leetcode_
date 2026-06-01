// Last updated: 6/1/2026, 11:44:32 AM
class Solution {
public:
    void moveZeroes(vector<int>& v) {
        int n = v.size();
        int count = 0;

        for(int i = 0; i < n; i++){
            if(v[i] == 0){
                v.erase(v.begin() + i);
                count++;
                i--;
                n--;
            }
        }

        for(int i = 0; i < count; i++){
            v.push_back(0);
        }
    }
};