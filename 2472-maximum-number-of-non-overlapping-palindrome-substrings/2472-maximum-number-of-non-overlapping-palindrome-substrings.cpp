class Solution {
public:


bool is(string &s,int i,int j){
    while(i<j){
        if(s[i]!=s[j]) return false;
        else{
            i++;
            j--;
        }
    }
    return true;
}
int solve(string &s,int k,int i,int j,vector<vector<int>> &dp){
    int n=s.size();
    if(i>=n || j>=n) return 0;
     if(dp[i][j]!=-1) return dp[i][j];
    if(is(s,i,j)){
       
        int take=1+solve(s,k,j+1,j+k,dp);
        int grow=solve(s,k,i,j+1,dp);
        int skip=solve(s,k,i+1,j+1,dp);
        return dp[i][j]=max({take,grow,skip});
    }
    int grow=solve(s,k,i,j+1,dp);
    int skip=solve(s,k,i+1,j+1,dp);
    return dp[i][j]=max(grow,skip);


}
    int maxPalindromes(string s, int k) {
        int n=s.size();
        if(k==1) return n;
     
        vector<vector<int>> dp(n, vector<int>(n, -1));
        return solve(s,k,0,k-1,dp);
    }
};