// Last updated: 6/27/2026, 10:22:56 AM
class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        int n=nums.size();
        k=k%n;
        
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin()+k);
        reverse(nums.begin()+k, nums.end());
    }
};