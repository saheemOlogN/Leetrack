class Solution {
public:
int dp1[101];
int dp2[101];
int solve1(vector<int> nums,int i){
    if(i>=nums.size()-1) return 0;
    if(dp1[i]!=-1) return dp1[i];

    int take=nums[i]+solve1(nums,i+2);
    int skip=solve1(nums,i+1);
    return dp1[i]=max(take,skip);
}

int solve2(vector<int> nums,int i){
    if(i>=nums.size()) return 0;
    if(dp2[i]!=-1) return dp2[i];

    int take=nums[i]+solve2(nums,i+2);
    int skip=solve2(nums,i+1);
    return dp2[i]=max(take,skip);
}
    int rob(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        if(nums.size()==2) return max(nums[1],nums[0]);
        memset(dp1,-1,sizeof(dp1));
        memset(dp2,-1,sizeof(dp2));
        int one=solve1(nums,0);
        int two=solve2(nums,1);
        return max(one,two);
    }
};