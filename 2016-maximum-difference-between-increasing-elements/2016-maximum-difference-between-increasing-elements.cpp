class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int res=-1;
        int minLeft=nums[0];
        for(int j=1;j<nums.size();j++){
      
            minLeft=min(minLeft,nums[j]);
            if(nums[j]>minLeft)res=max(res,nums[j]-minLeft);
        }
        return res;
    }
};