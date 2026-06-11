// Last updated: 6/11/2026, 3:34:18 PM
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int low=0;
        int high=arr.size()-1;
        while(low<high){
            int mid=low+(high-low)/2;
            if(arr[mid] < arr[mid+1])
                low = mid + 1;
            else
                high = mid;
        }
        return low;
    }
};