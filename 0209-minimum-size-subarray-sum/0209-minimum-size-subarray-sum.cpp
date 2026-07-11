class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
       int res=INT_MAX;
       int low=0;
       int sum=0;
       for(int high=0;high<nums.size();high++){
        sum+=nums[high];
        while(sum>=target){
            sum-=nums[low];
             res=min(res,high-low+1);
            low++;
        }
       
       }
       return res==INT_MAX?0:res; 
    }
};