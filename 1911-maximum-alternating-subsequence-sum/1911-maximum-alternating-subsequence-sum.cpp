class Solution {
public:
typedef long long ll;

    ll dp[1000001][2];

    ll solve(vector<int> &nums,int i,bool isEven){
        if(i>=nums.size()) return 0;
        if(dp[i][isEven]!=-1) return dp[i][isEven];
        ll skip=solve(nums,i+1,isEven);
        ll val=nums[i];
        if(!isEven) val=-val;
        ll take=solve(nums,i+1,!isEven)+val;

        return dp[i][isEven]=max(skip,take);
    }
    long long maxAlternatingSum(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        return solve(nums,0,true);
    }
};