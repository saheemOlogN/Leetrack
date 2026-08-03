class Solution {
public:
vector<int> dp;
int solve(int i,vector<int>& stoneValue,int n){
    if(i>=n) return 0;
    if(dp[i]!=-1) return dp[i];
    int result=stoneValue[i]-solve(i+1,stoneValue,n);
    if(i+1<n) result=max(result,stoneValue[i]+stoneValue[i+1]-solve(i+2,stoneValue,n));
    if(i+2<n) result=max(result,stoneValue[i]+stoneValue[i+1]+stoneValue[i+2]-solve(i+3,stoneValue,n));
    return dp[i]=result;
}
    string stoneGameIII(vector<int>& stoneValue) {
        int n=stoneValue.size();
        dp.resize(n+1,-1);
        int res=solve(0,stoneValue,n);
        if(res==0) return "Tie";
        else if(res<0) return "Bob";
        return "Alice";
    }
};