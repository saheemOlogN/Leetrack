class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        int ans=0;
        int maxLeft=0;
        int n=nums.size();
        for(int j=k;j<n;j++){
            maxLeft=max(maxLeft,nums[j-k]);
            ans=max(ans,nums[j]+maxLeft);
        }
        return ans;
    }
};