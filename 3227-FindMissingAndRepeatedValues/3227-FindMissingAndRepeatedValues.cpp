// Last updated: 6/13/2026, 1:29:26 PM
class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
         vector<int> freq(n*n+1,0);
        for(auto i:grid){
            for(auto j:i){
                freq[j]++;
            }
        }
        int repeated = -1;
        int missing = -1;

        for(int i = 1; i <= n * n; i++){

            if(freq[i] == 2){
                repeated = i;
            }

            if(freq[i] == 0){
                missing = i;
            }
        }

        return {repeated, missing} ;               
                

    }
};