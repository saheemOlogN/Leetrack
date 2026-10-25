class Solution {
public:
int m,n;
    vector<vector<int>> directions={{1,0},{-1,0},{0,1},{0,-1}};
    int non;
    int res;
    void backtrack(vector<vector<int>>& grid,int count,int i,int j){
        if(i<0 || j>=n || i>=m || j<0 || grid[i][j]==-1) return;

        if(grid[i][j]==2){
            if(count==non) res++;
            return;
        }
        grid[i][j]=-1;
        for(auto &x:directions){
            int new_i=i+x[0];
            int new_j=j+x[1];
            backtrack(grid,count+1,new_i,new_j);
        }



        grid[i][j]=0;

    }
    
    int uniquePathsIII(vector<vector<int>>& grid) {
        pair<int,int> start;
        non=0;
        
        m=grid.size();
        n=grid[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==0) non++;
                else if(grid[i][j]==1) {
                    start={i,j};
                    non++;
                }
            }
        }
        res=0;
        int count=0;
        int x=start.first;
        int y=start.second;
        backtrack(grid,count,x,y);
        return res;
    }
};