class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long res=0;
        int mn=-1;
        int mx=-1;
        int cx=-1;

        for(int high=0;high<nums.size();high++){
            if(nums[high]<minK || nums[high]>maxK) cx=high;
            if(nums[high]==minK) mn=high;
            if(nums[high]==maxK) mx=high;
       

            long long smaller=min(mn,mx);
            long long temp=smaller-cx;
            res+= (temp<=0?0:temp);
        }



        return res;
    }
};