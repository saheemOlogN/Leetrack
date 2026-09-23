class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int total=accumulate(begin(nums),end(nums),0);
        int valid=total-x; 
        if (valid < 0) return -1;
        if (valid == 0) return nums.size();
        int res=-1;
        int low=0;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            while(sum>valid){
                sum-=nums[low];
                low++;
            }
            if(sum==valid) res=max(res,i-low+1);

        }
        return res==-1?-1:nums.size()-res;
    }
};