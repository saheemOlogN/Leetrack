class Solution {
public:
int dp[100001];
  
    int stoneGameVIII(vector<int>& stones) {
        vector<int> prefix(stones.size());
        memset(dp,-1,sizeof(dp));
        prefix[0]=stones[0];
        for(int i=1;i<stones.size();i++){
            prefix[i]=stones[i]+prefix[i-1];
        }
        
        vector<int> dp(stones.size(),0);
        dp[stones.size()-1]=prefix[stones.size()-1];

        for(int i=stones.size()-2;i>=0;i--){
            int take=prefix[i]-dp[i+1];
            int skip=dp[i+1];
            dp[i]=max(take,skip);
        }

        return dp[1];
    }
};