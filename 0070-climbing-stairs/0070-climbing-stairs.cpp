class Solution {
public:
int dp[46];
int solve(int n){
    if(n<0) return 0;
    if(n==0) return 1;
    int one,two;
    if(dp[n]!=-1) return dp[n];
    one = solve(n-1);
    two = solve(n-2);

    
    return dp[n]=one+two;

}
    int climbStairs(int n) {
        memset(dp,-1,sizeof(dp));
        return solve(n);
    }
};