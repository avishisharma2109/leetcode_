// Last updated: 6/23/2026, 3:08:56 PM
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow=nums[0];
        int fast=nums[0];

        do{
            slow=nums[slow];
            fast=nums[nums[fast]];
        }while(slow!=fast);//pehli baar loop mai break saved in fast

        slow=nums[0];//reset

        while(slow!=fast){
            slow=nums[slow];
            fast=nums[fast];//slow pe save hoga ab jab loop break hoga
            //ans will be same 
        }

        return fast;


    }
};