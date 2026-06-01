#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& v) {

        int n = v.size();
        
        for(int i=0;i<n-1;i++){
            if(v[i]==v[i+1]){
                v.erase(v.begin() + i);
                i--;
                n--;
            }
        }

        return v.size();
    }
};
