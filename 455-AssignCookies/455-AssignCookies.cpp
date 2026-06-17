// Last updated: 6/17/2026, 4:02:52 PM
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int i=0;
        int j=0;
        int count=0;
        while(i<s.size() && j<g.size()){
            if(s[i]>=g[j]){
                count++;
                i++;
                j++;
            }
            else{
                i++;
            }
        }
        return count;
    }
};