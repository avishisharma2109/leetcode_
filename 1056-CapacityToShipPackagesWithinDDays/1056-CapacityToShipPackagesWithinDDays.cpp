// Last updated: 6/29/2026, 11:51:30 AM
class Solution {
public:
    bool canShip(vector<int>& weights,int days,int capacity){
        int usedDays=1;
        int currentWeight=0;
        for(int weight: weights){
            if(currentWeight+weight<=capacity){
                currentWeight+=weight;
            }
            else{
                usedDays++;
                currentWeight=weight;
            }
        }
        return usedDays <=days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());
        int high=accumulate(weights.begin(),weights.end(),0);

        while(low<=high){
            int mid=low+(high-low)/2;
            if(canShip(weights,days,mid)){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;

    }
};