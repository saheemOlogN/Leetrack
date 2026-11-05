class Solution {
public:

vector<vector<int>> dir = {{1, 0}, {0, 1}};
int dp[101][101];
int solve(int i,int j,int m,int n){
    if(i>m || j>n || i<0 || j<0){
        return 0;
    }
    if(dp[i][j]!=-1) return dp[i][j];
    int ways=0;

    if(i==m-1 && j==n-1) return 1;
    for(auto &d:dir){
        int new_i= i+d[0];
        int new_j= j+d[1];
        ways+=solve(new_i,new_j,m,n);
    }
    return dp[i][j]=ways;
    

}
    int uniquePaths(int m, int n) {
        memset(dp,-1,sizeof(dp));
        int res=solve(0,0,m,n);
        return res;
    }
};