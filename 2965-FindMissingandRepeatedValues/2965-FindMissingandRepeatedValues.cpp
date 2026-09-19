// Last updated: 9/19/2026, 7:23:12 PM
1class Solution {
2public:
3    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
4        int n=grid.size();
5         vector<int> freq(n*n+1,0);
6        for(auto i:grid){
7            for(auto j:i){
8                freq[j]++;
9            }
10        }
11        int repeated = -1;
12        int missing = -1;
13
14        for(int i = 1; i <= n * n; i++){
15
16            if(freq[i] == 2){
17                repeated = i;
18            }
19
20            if(freq[i] == 0){
21                missing = i;
22            }
23        }
24
25        return {repeated, missing} ;               
26                
27
28    }
29};