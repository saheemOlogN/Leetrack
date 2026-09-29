class Solution {
public:
    int dp[101][101][201];
    bool solve(int i,int j,int m,int n,int count,vector<vector<char>>& grid){
       
        count+= grid[i][j]=='('?1:-1;
        if(count<0) return false;
         if(i==m-1 && j==n-1) return count==0;

         if(dp[i][j][count]!=-1) return dp[i][j][count];

        if(i+1<m){
            if(solve(i+1,j,m,n,count,grid)) return dp[i][j][count]=true;
        }
        if(j+1<n){
            if(solve(i,j+1,m,n,count,grid)) return dp[i][j][count]=true;
        }

        return dp[i][j][count]=false;
    }
    bool hasValidPath(vector<vector<char>>& grid) {
        int n=grid[0].size();
        int m=grid.size();
        memset(dp,-1,sizeof(dp));
        return solve(0,0,m,n,0,grid);
    }
};