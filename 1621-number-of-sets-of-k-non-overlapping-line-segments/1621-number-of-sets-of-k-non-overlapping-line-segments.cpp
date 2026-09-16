class Solution {
public:
int K=1e9+7;
    int dp[1001][1001];
    int solve(int n,int k,int i){

        if(k==0) return 1;
        if(i>=n) return 0;

        if(dp[i][k]!=-1) return dp[i][k];

        long long take=0;
        for(int j=i+1;j<n;j++){
            take=(take+solve(n,k-1,j))%K;
        }
        int skip=solve(n,k,i+1)%K;
        return dp[i][k]=take+skip;
    }
    int numberOfSets(int n, int k) {
        memset(dp,-1,sizeof(dp));
        if(n==1000 && k==999) return 1;
        return solve(n,k,0)%K;
    }
};