class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int res=0;
        int low=0;
        int zero=0;
        long long sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            
            while(low<i && (nums[low]==0 || sum>goal)){
            if(nums[low]==0) zero++;
            else zero=0;
                sum-=nums[low];
                low++;
            }
            if(sum==goal) res+=1+zero;

        }
        return res;
    }
};