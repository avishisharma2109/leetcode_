// Last updated: 6/11/2026, 3:14:27 PM
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0;
        int n=nums.size();
        int high=n-1;
        while(low<=high){
            int mid=(high+low)/2;
        if(nums[mid]==target){
            return mid;
        }
        if(nums[low]<=nums[mid]){
            //left side is sorted
            if(nums[low] <= target && target < nums[mid]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        else{
            //right side is sorted
            if(nums[mid] < target && target <= nums[high]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        }
        
        
        return -1;
    
    }
};